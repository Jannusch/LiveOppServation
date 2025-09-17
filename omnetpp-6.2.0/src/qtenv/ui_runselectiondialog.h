/********************************************************************************
** Form generated from reading UI file 'runselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNSELECTIONDIALOG_H
#define UI_RUNSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RunSelectionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *configName;
    QLabel *label_3;
    QComboBox *runNumber;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunSelectionDialog)
    {
        if (RunSelectionDialog->objectName().isEmpty())
            RunSelectionDialog->setObjectName("RunSelectionDialog");
        RunSelectionDialog->setWindowModality(Qt::NonModal);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RunSelectionDialog->sizePolicy().hasHeightForWidth());
        RunSelectionDialog->setSizePolicy(sizePolicy);
        RunSelectionDialog->setModal(false);
        verticalLayout_2 = new QVBoxLayout(RunSelectionDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(RunSelectionDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(RunSelectionDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        configName = new QComboBox(RunSelectionDialog);
        configName->setObjectName("configName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(configName->sizePolicy().hasHeightForWidth());
        configName->setSizePolicy(sizePolicy1);
        configName->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(configName, 0, 1, 1, 1);

        label_3 = new QLabel(RunSelectionDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        runNumber = new QComboBox(RunSelectionDialog);
        runNumber->setObjectName("runNumber");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(runNumber->sizePolicy().hasHeightForWidth());
        runNumber->setSizePolicy(sizePolicy2);
        runNumber->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(runNumber, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(1, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RunSelectionDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(configName);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(configName, runNumber);
        QWidget::setTabOrder(runNumber, buttonBox);

        retranslateUi(RunSelectionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, RunSelectionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RunSelectionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RunSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *RunSelectionDialog)
    {
        RunSelectionDialog->setWindowTitle(QCoreApplication::translate("RunSelectionDialog", "Set Up Inifile Configuration", nullptr));
        label->setText(QCoreApplication::translate("RunSelectionDialog", "Set up one of the configurations defined in ...", nullptr));
        label_2->setText(QCoreApplication::translate("RunSelectionDialog", "Config name:", nullptr));
        label_3->setText(QCoreApplication::translate("RunSelectionDialog", "Run number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RunSelectionDialog: public Ui_RunSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNSELECTIONDIALOG_H
