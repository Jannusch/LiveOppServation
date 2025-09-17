/********************************************************************************
** Form generated from reading UI file 'rununtildialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNUNTILDIALOG_H
#define UI_RUNUNTILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RunUntilDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *timeLabel;
    QLabel *eventLabel;
    QLabel *msgLabel;
    QLabel *empty;
    QLabel *modeLabel;
    QLineEdit *timeEdit;
    QLineEdit *eventEdit;
    QCheckBox *stopCheckbox;
    QComboBox *modeComboBox;
    QComboBox *msgCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunUntilDialog)
    {
        if (RunUntilDialog->objectName().isEmpty())
            RunUntilDialog->setObjectName("RunUntilDialog");
        RunUntilDialog->resize(453, 207);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RunUntilDialog->sizePolicy().hasHeightForWidth());
        RunUntilDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RunUntilDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        timeLabel = new QLabel(RunUntilDialog);
        timeLabel->setObjectName("timeLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, timeLabel);

        eventLabel = new QLabel(RunUntilDialog);
        eventLabel->setObjectName("eventLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, eventLabel);

        msgLabel = new QLabel(RunUntilDialog);
        msgLabel->setObjectName("msgLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, msgLabel);

        empty = new QLabel(RunUntilDialog);
        empty->setObjectName("empty");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, empty);

        modeLabel = new QLabel(RunUntilDialog);
        modeLabel->setObjectName("modeLabel");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, modeLabel);

        timeEdit = new QLineEdit(RunUntilDialog);
        timeEdit->setObjectName("timeEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, timeEdit);

        eventEdit = new QLineEdit(RunUntilDialog);
        eventEdit->setObjectName("eventEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, eventEdit);

        stopCheckbox = new QCheckBox(RunUntilDialog);
        stopCheckbox->setObjectName("stopCheckbox");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, stopCheckbox);

        modeComboBox = new QComboBox(RunUntilDialog);
        modeComboBox->addItem(QString());
        modeComboBox->addItem(QString());
        modeComboBox->addItem(QString());
        modeComboBox->setObjectName("modeComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modeComboBox->sizePolicy().hasHeightForWidth());
        modeComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, modeComboBox);

        msgCombo = new QComboBox(RunUntilDialog);
        msgCombo->setObjectName("msgCombo");
        sizePolicy1.setHeightForWidth(msgCombo->sizePolicy().hasHeightForWidth());
        msgCombo->setSizePolicy(sizePolicy1);
        msgCombo->setEditable(false);
        msgCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, msgCombo);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(RunUntilDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RunUntilDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RunUntilDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RunUntilDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RunUntilDialog);
    } // setupUi

    void retranslateUi(QDialog *RunUntilDialog)
    {
        RunUntilDialog->setWindowTitle(QCoreApplication::translate("RunUntilDialog", "Run Until", nullptr));
        timeLabel->setText(QCoreApplication::translate("RunUntilDialog", "Simulation time to stop at:", nullptr));
        eventLabel->setText(QCoreApplication::translate("RunUntilDialog", "Event number to stop at:", nullptr));
        msgLabel->setText(QCoreApplication::translate("RunUntilDialog", "Message to stop at:", nullptr));
        empty->setText(QString());
        modeLabel->setText(QCoreApplication::translate("RunUntilDialog", "Running mode:", nullptr));
        stopCheckbox->setText(QCoreApplication::translate("RunUntilDialog", "Stop when message is cancelled", nullptr));
        modeComboBox->setItemText(0, QCoreApplication::translate("RunUntilDialog", "Normal", nullptr));
        modeComboBox->setItemText(1, QCoreApplication::translate("RunUntilDialog", "Fast (rare updates)", nullptr));
        modeComboBox->setItemText(2, QCoreApplication::translate("RunUntilDialog", "Express (tracing off)", nullptr));

    } // retranslateUi

};

namespace Ui {
    class RunUntilDialog: public Ui_RunUntilDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNUNTILDIALOG_H
