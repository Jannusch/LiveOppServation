/********************************************************************************
** Form generated from reading UI file 'layersdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERSDIALOG_H
#define UI_LAYERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayersDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *intro;
    QGridLayout *gridLayout;
    QScrollArea *hideFigScrollArea;
    QWidget *hideFigWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *showFigures;
    QLabel *hideFigures;
    QScrollArea *showFigScrollArea;
    QWidget *showFigWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *note;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LayersDialog)
    {
        if (LayersDialog->objectName().isEmpty())
            LayersDialog->setObjectName("LayersDialog");
        LayersDialog->resize(491, 366);
        verticalLayout = new QVBoxLayout(LayersDialog);
        verticalLayout->setObjectName("verticalLayout");
        intro = new QLabel(LayersDialog);
        intro->setObjectName("intro");
        intro->setWordWrap(true);

        verticalLayout->addWidget(intro);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        hideFigScrollArea = new QScrollArea(LayersDialog);
        hideFigScrollArea->setObjectName("hideFigScrollArea");
        hideFigScrollArea->setWidgetResizable(true);
        hideFigScrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        hideFigWidget = new QWidget();
        hideFigWidget->setObjectName("hideFigWidget");
        hideFigWidget->setGeometry(QRect(0, 0, 218, 225));
        verticalLayout_4 = new QVBoxLayout(hideFigWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        hideFigScrollArea->setWidget(hideFigWidget);

        gridLayout->addWidget(hideFigScrollArea, 1, 1, 1, 1);

        showFigures = new QLabel(LayersDialog);
        showFigures->setObjectName("showFigures");

        gridLayout->addWidget(showFigures, 0, 0, 1, 1);

        hideFigures = new QLabel(LayersDialog);
        hideFigures->setObjectName("hideFigures");

        gridLayout->addWidget(hideFigures, 0, 1, 1, 1);

        showFigScrollArea = new QScrollArea(LayersDialog);
        showFigScrollArea->setObjectName("showFigScrollArea");
        showFigScrollArea->setWidgetResizable(true);
        showFigScrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        showFigWidget = new QWidget();
        showFigWidget->setObjectName("showFigWidget");
        showFigWidget->setGeometry(QRect(0, 0, 243, 225));
        verticalLayout_3 = new QVBoxLayout(showFigWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        showFigScrollArea->setWidget(showFigWidget);

        gridLayout->addWidget(showFigScrollArea, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        note = new QLabel(LayersDialog);
        note->setObjectName("note");

        verticalLayout->addWidget(note);

        buttonBox = new QDialogButtonBox(LayersDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LayersDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LayersDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LayersDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LayersDialog);
    } // setupUi

    void retranslateUi(QDialog *LayersDialog)
    {
        LayersDialog->setWindowTitle(QCoreApplication::translate("LayersDialog", "Select Layers", nullptr));
        intro->setText(QCoreApplication::translate("LayersDialog", "Select which figures to display, based on the list of tags each figure contains.", nullptr));
        showFigures->setText(QCoreApplication::translate("LayersDialog", "Show figures having any of the tags:", nullptr));
        hideFigures->setText(QCoreApplication::translate("LayersDialog", "But hide those that also contain:", nullptr));
        note->setText(QCoreApplication::translate("LayersDialog", "Note: Untagged figures are always shown.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayersDialog: public Ui_LayersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERSDIALOG_H
