import dash
from dash import dash_table
from dash import html
from dash import dcc
from dash import callback
import plotly.express as px
from dash.dependencies import State, Input, Output
from dash.exceptions import PreventUpdate

import plotly.express as px

import logging

import logic

logging.basicConfig(level=logging.DEBUG, format='%(asctime)s - %(levelname)s - %(message)s')

app = dash.Dash(
    __name__,
    meta_tags=[
        {
            "name": "viewport",
            "content": "width=device-width, initial-scale=1, maximum-scale=1.0, user-scalable=yes",
        }
    ],
    update_title=None,
    prevent_initial_callbacks=True,
)
app.title = "LiveOppServation"
server = app.server

# The simulation which is currently selected as the active simulation in the UI
active_sim = logic.Logic()


figure = dict(data=[{"type": "line", 'x': [10, 12, 14], 'y': [4, 6, 2]}])

def sim_drop_down(key=""):
    if key == "":
        return [{'label': f"{y['ip']}:{y['port']}", 'value': x} for x,y in logic.sim_map.items()]
    else:
        return [logic.sim_map[key]]

def build_vector_panel():
    return html.Div(
        id="vectors",
        className="six columns",
        children=[
            html.P(
                className="section-title", 
                children="The following vectors are known:"
            )
        ]
    )

def build_connecter_panel():
    return html.Div(
        className="row",
        children=[
            # input parser check for ip address
            dcc.Input(id='sim-ip-input', type='text', placeholder='localhost', debounce=True, style={"width": "15rem"}),
            dcc.Input(id='sim-port-input', type='number', placeholder='13151', debounce=True, style={"width": "10rem"}),
            html.Button(children="Connect", id="connect-btn", n_clicks=0),
        ],
    )

def build_control_panel():
    return html.Div(
        id="control",
        className="six columns",
        children=[
            html.P(className="section-title", children="Control Panel", style={"margin": "1rem 1rem"}),
            html.Div(
                className="row",
                children=[
                    dcc.Dropdown(id="sim-selector",className="dropdown", options=sim_drop_down(), value=None, placeholder='Select a simulation'),
                ],
            ),
            dcc.Interval(
                id="interval",
                interval=2500, # in milliseconds
                ),
            html.P(className="section-title", children="Update Interval", style={"margin": "1rem 1rem"}),
            html.Div(
                id="update-slider-div",
                children=[
                    dcc.Slider(
                        1, 1000,
                        id="update-slider",
                        marks={"1":"1", "250": "250", "500": "500", "750": "750", "1000": "1000"},
                        # tooltip={"placement": "bottom", "always_visible": False},    
                    ),
                ]
            ),
            html.Div(
                id='update-row',
                className="row",
                children=[
                    dcc.Input(
                        id="update-input",
                        type="number",
                        debounce=True,
                        value=2500,
                        min=1,
                        style={"width": "15rem"},
                    ),
                    dcc.Dropdown(
                        id="update-unit",
                        value="ms",
                        options=["µs", "ms", "s"],
                    )
                ]
            )
            
        ],
        style={"border": "1px solid"}
    )

def build_time_panel():
    return html.Div(
        id="time-panel",
        className="six columns",
        children=[
            html.P(className="section-title", children="Time Panel", style={"margin": "1rem 1rem"}),
            html.Div(
                className="row",
                children=[
                html.Button("Get time", id="get_time", n_clicks=0, style={"margin": "0.5rem 1rem"}),
                html.P(children="not_initialized", id="time-text", style={"margin": "0.5rem 1rem", "width": "10rem"}),
                ],
            ),
        ],
        style={"border": "1px solid"}
    )

def build_eval_panel():
    return html.Div(
        id="data-container",
        children=[
            html.Div(
                id="container-data-table",
                children=[
                    dcc.Store(id="store", data = active_sim.vectors.to_dict('records')),
                    dcc.Store(id="vector-meta-store", data=active_sim.vectors_meta.to_dict('records')),
                    html.P(className="section-title", children="Vector Data", style={"margin": "1rem 1rem"}),
                    dcc.Tabs(
                        children=[
                            dcc.Tab(
                                label="Raw Data",
                                children=[
                                    dash_table.DataTable(
                                        id="vector-data",
                                        row_selectable="multi",
                                        sort_action="native",
                                        sort_mode="multi", 
                                        columns=[
                                            {"name": i, "id": i} for i in active_sim.vectors.columns
                                        ],
                                        data=active_sim.vectors.to_dict("records"),
                                    ),
                                ]
                            ),
                            dcc.Tab(
                                label="Plots",
                                children=[
                                    dcc.Dropdown(
                                        id="id-dropdown",
                                        options=active_sim.vectors_meta["id"],
                                        value=[],
                                        multi=True,
                                    ),
                                    dcc.Graph(
                                        id="plotGrpah",
                                        figure= px.line(active_sim.vectors, x="time", y="value", color="id")
                                        # dict(data=[{"type": "line", 'x': active_sim.vectors['time'], 'y': active_sim.vectors['value'], "color": active_sim.vectors['id']}]),
                                    )
                                ]
                            ),
                            dcc.Tab(
                                label="Debug View",
                                children = [
                                    buildDebugTab()
                                ],
                            )
                        ],
                    ),
                ],
            ),
        ],
    )


def build_vector_panel():
    return html.Div(
        className="table-container",
        id="vector-panel",
        children=[
            html.Div(
                id="control-vector",
                children=[
                    html.Button(
                        children="Update Vectors",
                        id="update-vector-btn",
                    )
                ],
            ),
            html.Div(
                id="table-upper",
                className="six columns",
                children=[
                    html.P("Vector Table"),
                    dcc.Loading(
                        id="vector-list-loading",
                        children=html.Div(
                            id="vector-list-container",
                            children=[
                                
                            ]
                        ),
                    ),
                    dash_table.DataTable(
                        id="vector-meta-data",
                        row_selectable="multi",
                        sort_action="native",
                        sort_mode="multi", 
                        columns=[
                            {"name": i, "id": i} for i in active_sim.vectors_meta.columns
                        ],
                        data=active_sim.vectors_meta.to_dict("records"),
                    ),
                ]
            ),
        ],
    )        


def buildDebugTab():
    # Prepare vector options as (name, id) pairs
    operator_options = [
        {"label": op, "value": op} for op in ["==", "<=", ">=", "<", ">", "!="]
    ]

    return html.Div(
        id="debug-view",
        children=[
            dcc.Store(id="debug-rows-store", data=[]),
            html.Table([
                html.Thead(
                    html.Tr([
                        html.Th("Vector"),
                        html.Th("Operator"),
                        html.Th("Value"),
                        html.Th("")
                    ])
                ),
                html.Tbody([
                    html.Tr([
                        html.Td(
                            dcc.Dropdown(
                                id={"type": "debug-vector-dropdown", "index": 0},
                                options=[],  # Will be set by callback
                                placeholder="Select vector",
                                style={"width": "100%"}
                            )
                        ),
                        html.Td(
                            dcc.Dropdown(
                                id={"type": "debug-operator-dropdown", "index": 0},
                                options=operator_options,
                                value="==",
                                style={"width": "100%"}
                            )
                        ),
                        html.Td(
                            dcc.Input(
                                id={"type": "debug-value-input", "index": 0},
                                type="number",
                                placeholder="Value",
                                style={"width": "100%"}
                            )
                        ),
                        html.Td(
                            html.Button(
                                "Add",
                                id="debug-add-row-btn",
                                n_clicks=0,
                                style={"width": "100%"}
                            )
                        )
                    ], id={"type": "debug-row", "index": 0})
                ], id="debug-table-body")
            ], id="debug-table", style={"width": "100%", "tableLayout": "fixed"}),
            html.Tbody(id="debug-rows-container")
        ]
    )
# Add this after update_debug_vector_dropdown_options
from dash.dependencies import MATCH
@callback(
    Output("debug-rows-store", "data"),
    Output("debug-rows-container", "children"),
    Input("debug-add-row-btn", "n_clicks"),
    State({"type": "debug-vector-dropdown", "index": 0}, "value"),
    State({"type": "debug-operator-dropdown", "index": 0}, "value"),
    State({"type": "debug-value-input", "index": 0}, "value"),
    State("debug-rows-store", "data"),
    prevent_initial_call=True
)
def add_debug_row(n_clicks, vector, operator, value, rows):
    if n_clicks is None or n_clicks == 0:
        raise PreventUpdate
    if not vector or not operator or value is None:
        raise PreventUpdate
    # Add new row
    idx = len(rows) + 1
    new_row = {
        "vector": vector,
        "operator": operator,
        "value": value,
        "active": True,
        "index": idx
    }

    active_sim.setdebugwatch(vector, operator, value)


    rows.append(new_row)
    # Render all rows
    operator_options = [
        {"label": op, "value": op} for op in ["==", "<=", ">=", "<", ">", "!="]
    ]
    rendered_rows = []
    for row in rows:
        rendered_rows.append(
            html.Tr([
                html.Td(
                    dcc.Input(
                        id={"type": "debug-vector-input", "index": row["index"]},
                        type="text",
                        value=row.get("vector_label", row["vector"]),
                        readOnly=True
                    )
                ),
                html.Td(
                    dcc.Dropdown(
                        id={"type": "debug-operator-dropdown", "index": row["index"]},
                        options=operator_options,
                        value=row["operator"]
                    )
                ),
                html.Td(
                    dcc.Input(
                        id={"type": "debug-value-input", "index": row["index"]},
                        type="number",
                        value=row["value"]
                    )
                ),
                html.Td(
                    dcc.Checklist(
                        id={"type": "debug-active-checkbox", "index": row["index"]},
                        options=[{"label": "Active", "value": "active"}],
                        value=["active"] if row["active"] else []
                    )
                )
            ], id={"type": "debug-row", "index": row["index"]})
        )
    return rows, rendered_rows

######
# TODO: check if circular dep, in general this is stupid
# TEST
# TODO: BUG: Double intervale update
# @callback(
#     Output('update-input', 'value'),
#     Output('interval', 'interval', allow_duplicate=True), # in ms
#     State('update-unit', 'value'),
#     Input('update-slider', 'value'),
#     prevent_initial_call=True,)
# def update_output_input(value, unit):
#     if (unit == "µs"):
#         return value, value / 1000
#     elif (unit == "ms"):
#         return value, value
#     elif (unit == "s"):
#         return value, value*1000

# TODO: BUG: changeing the unit will not triggern an intervall update
@callback(
    # Output('update-slider', 'value'),
    Output('interval', 'interval'), # in ms
    State('update-unit', 'value'),
    Input('update-input', 'value'),
    )
def update_output_slider(unit, value):
    if (unit == "µs"):
        return value / 1000
        # return value, value / 1000
    elif (unit == "ms"):
        return value
        # return value, value
    elif (unit == "s"):
        return value * 1000
        # return value, value*1000
# circ dep end
#####

@callback(
        [Output('connect-btn', 'children'),
        Output('sim-selector', 'options'),
        Output('sim-selector', 'value'),],
        Input('connect-btn', 'n_clicks'), 
        Input("sim-ip-input", 'value'), 
        Input("sim-port-input", 'value'), 
        Input('connect-btn', 'children'), 
        prevent_initial_call=True
    )
def connect_button(n_clicks, ip, port, btn_text):
    if n_clicks == 0:
        return "Connect"
    if ip == None:
        ip = "localhost"
    if port == None:
        port = 13151

    if btn_text == "Connect":
        new_uuid = logic.connect(ip, port)
        global active_sim
        active_sim = logic.sim_map[new_uuid]["logic_obj"]
        return ['Connect', sim_drop_down(), new_uuid]
    else:
        return f"Connecting to {ip}:{port}"


@callback(
        Output('time-text', 'children'),
        Input('get_time', 'n_clicks'),
        prevent_initial_call=True
)
def get_time(n_clicks):
    active_sim.get_time_info()
    return f"Exponent: {active_sim.time_scale_exp}"



# Update vector meta table, id-dropdown, and vector-meta-store
@callback(
    Output("vector-meta-data", "data", allow_duplicate=True),
    Output("id-dropdown", "options"),
    Output("vector-meta-store", "data"),
    Input("update-vector-btn", "n_clicks"),
    State('vector-meta-data', 'data'),
    State('vector-meta-data', 'columns'),
    prevent_initial_call=True
)
def update_vectors(n_clicks, rows, columns):
    ids = []
    meta_records = []
    if n_clicks is not None:
        active_sim.update_vector_metadata()
        rows = active_sim.vectors_meta.to_dict('records')
        ids = active_sim.vectors_meta["id"].to_list()
        meta_records = rows
        print(ids)
    return rows, ids, meta_records

# Dynamically update debug vector dropdown options
from dash.dependencies import ALL
@callback(
    Output({'type': 'debug-vector-dropdown', 'index': ALL}, 'options'),
    Input('vector-meta-store', 'data'),
)
def update_debug_vector_dropdown_options(meta_records):
    if not meta_records:
        return [[]]
    options = [
        {"label": f"{row['name']} ({row['id']})", "value": row['id']} 
        for row in meta_records
    ]
    # Return options for all pattern-matched dropdowns
    return [options]


@callback(
    Input("sim-selector", 'value')
)
def set_active_sim(value):
    global active_sim
    active_sim = logic.sim_map[value]["logic_obj"]
    logging.debug("Active sim: %s", value)


# TODO: make this work lol
@callback(
    Output("vector-data", 'data'),
    Output("vector-meta-data", 'data', allow_duplicate=True),
    Output("vector-meta-data", "selected_rows"),
    Output("plotGrpah", "figure"),
    Input('interval', 'n_intervals'),
    State('vector-meta-data', 'data'),
    State('vector-data', 'data'), 
    State('vector-meta-data', 'selected_row_ids'),
    State('id-dropdown', 'value'),
    prevent_initial_call = True,
)
def update_vector_data(n_intervals, rows, data, selected_rows, selected_ids):

    if active_sim.sim_uuid is None or selected_rows is None or len(selected_rows) == 0:
        return [data, rows, [], px.line()]
    if n_intervals > 0:
        logging.debug(f"n_intervals: {selected_rows}")
        active_sim.update_vectors(selected_rows)
        
        updated_list = [
        {
            **item,
            'last_update': item['last_update'] * (10 ** active_sim.time_scale_exp) if item['last_update'] is not None else None
        }
        for item in active_sim.vectors_meta.to_dict('records')
        ]
        active_sim.vectors
        # creating the new figure
        figure = px.line(active_sim.vectors.loc[active_sim.vectors['id'].isin(selected_ids)], x="time", y="value", color="id")
        return [active_sim.vectors.to_dict('records'), updated_list, [x - 1 for x in selected_rows], figure]


# app.clientside_callback(
#     """
# function (n_intervals, data) {
# return [{x: data.time, y: data.value, color: data.id}]
# }
#     """,
#     Output("plotGrpah", "extendData"),
#     Input("interval", "n_intervals"),
#     State('store', 'data')
# )


app.layout = html.Div(
    className="container scalable",
    children=[
        html.Div(
            id="banner",
            className="banner",
            children=[
                html.H6("LiveOppServation"),
                html.Img(src=app.get_asset_url("logo.png")),
            ],
        ),
        html.Div(
            children=
            [
                html.Div(
                    id = "container-general",
                    className="six columns",
                    children=[
                        build_connecter_panel(),
                        build_control_panel(),
                        build_time_panel(),
                    ],
                ),
                build_vector_panel(),
            ],
        ),
        build_eval_panel(),
    ],
)

if __name__ == "__main__":
    app.run(debug=True)