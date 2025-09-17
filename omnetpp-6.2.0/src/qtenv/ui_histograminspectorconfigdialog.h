/********************************************************************************
** Form generated from reading UI file 'histograminspectorconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMINSPECTORCONFIGDIALOG_H
#define UI_HISTOGRAMINSPECTORCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HistogramInspectorConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *styleLayout;
    QLabel *styleLabel;
    QComboBox *styleComboBox;
    QGridLayout *rangeLayout;
    QLineEdit *yMinLineEdit;
    QLineEdit *yMaxLineEdit;
    QLabel *minLabel;
    QLabel *xLabel;
    QLineEdit *xMaxLineEdit;
    QLabel *maxLabel;
    QLineEdit *xMinLineEdit;
    QLabel *yLabel;
    QLabel *rangeLabel;
    QSpacerItem *bottomSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HistogramInspectorConfigDialog)
    {
        if (HistogramInspectorConfigDialog->objectName().isEmpty())
            HistogramInspectorConfigDialog->setObjectName("HistogramInspectorConfigDialog");
        HistogramInspectorConfigDialog->resize(282, 195);
        verticalLayout = new QVBoxLayout(HistogramInspectorConfigDialog);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        styleLayout = new QHBoxLayout();
        styleLayout->setObjectName("styleLayout");
        styleLabel = new QLabel(HistogramInspectorConfigDialog);
        styleLabel->setObjectName("styleLabel");

        styleLayout->addWidget(styleLabel);

        styleComboBox = new QComboBox(HistogramInspectorConfigDialog);
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->setObjectName("styleComboBox");

        styleLayout->addWidget(styleComboBox);


        verticalLayout->addLayout(styleLayout);

        rangeLayout = new QGridLayout();
        rangeLayout->setObjectName("rangeLayout");
        yMinLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        yMinLineEdit->setObjectName("yMinLineEdit");

        rangeLayout->addWidget(yMinLineEdit, 2, 1, 1, 1);

        yMaxLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        yMaxLineEdit->setObjectName("yMaxLineEdit");

        rangeLayout->addWidget(yMaxLineEdit, 2, 2, 1, 1);

        minLabel = new QLabel(HistogramInspectorConfigDialog);
        minLabel->setObjectName("minLabel");
        minLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(minLabel, 0, 1, 1, 1);

        xLabel = new QLabel(HistogramInspectorConfigDialog);
        xLabel->setObjectName("xLabel");
        xLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(xLabel, 1, 0, 1, 1);

        xMaxLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        xMaxLineEdit->setObjectName("xMaxLineEdit");

        rangeLayout->addWidget(xMaxLineEdit, 1, 2, 1, 1);

        maxLabel = new QLabel(HistogramInspectorConfigDialog);
        maxLabel->setObjectName("maxLabel");
        maxLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(maxLabel, 0, 2, 1, 1);

        xMinLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        xMinLineEdit->setObjectName("xMinLineEdit");

        rangeLayout->addWidget(xMinLineEdit, 1, 1, 1, 1);

        yLabel = new QLabel(HistogramInspectorConfigDialog);
        yLabel->setObjectName("yLabel");
        yLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(yLabel, 2, 0, 1, 1);

        rangeLabel = new QLabel(HistogramInspectorConfigDialog);
        rangeLabel->setObjectName("rangeLabel");

        rangeLayout->addWidget(rangeLabel, 0, 0, 1, 1);

        rangeLayout->setColumnStretch(0, 1);
        rangeLayout->setColumnStretch(1, 2);
        rangeLayout->setColumnStretch(2, 2);

        verticalLayout->addLayout(rangeLayout);

        bottomSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(bottomSpacer);

        buttonBox = new QDialogButtonBox(HistogramInspectorConfigDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(styleComboBox, xMinLineEdit);
        QWidget::setTabOrder(xMinLineEdit, xMaxLineEdit);
        QWidget::setTabOrder(xMaxLineEdit, yMinLineEdit);
        QWidget::setTabOrder(yMinLineEdit, yMaxLineEdit);

        retranslateUi(HistogramInspectorConfigDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HistogramInspectorConfigDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HistogramInspectorConfigDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(HistogramInspectorConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *HistogramInspectorConfigDialog)
    {
        HistogramInspectorConfigDialog->setWindowTitle(QCoreApplication::translate("HistogramInspectorConfigDialog", "Histogram Options", nullptr));
        styleLabel->setText(QCoreApplication::translate("HistogramInspectorConfigDialog", "Style", nullptr));
        styleComboBox->setItemText(0, QCoreApplication::translate("HistogramInspectorConfigDialog", "Filled Rectangles", nullptr));
        styleComboBox->setItemText(1, QCoreApplication::translate("HistogramInspectorConfigDialog", "Empy Rectangles", nullptr));

#if QT_CONFIG(tooltip)
        yMinLineEdit->setToolTip(QCoreApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        yMaxLineEdit->setToolTip(QCoreApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", nullptr));
#endif // QT_CONFIG(tooltip)
        minLabel->setText(QCoreApplication::translate("HistogramInspectorConfigDialog", "min", nullptr));
        xLabel->setText(QCoreApplication::translate("HistogramInspectorConfigDialog", "x", nullptr));
#if QT_CONFIG(tooltip)
        xMaxLineEdit->setToolTip(QCoreApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", nullptr));
#endif // QT_CONFIG(tooltip)
        maxLabel->setText(QCoreApplication::translate("HistogramInspectorConfigDialog", "max", nullptr));
#if QT_CONFIG(tooltip)
        xMinLineEdit->setToolTip(QCoreApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", nullptr));
#endif // QT_CONFIG(tooltip)
        yLabel->setText(QCoreApplication::translate("HistogramInspectorConfigDialog", "y", nullptr));
        rangeLabel->setText(QCoreApplication::translate("HistogramInspectorConfigDialog", "Range", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistogramInspectorConfigDialog: public Ui_HistogramInspectorConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMINSPECTORCONFIGDIALOG_H
