/********************************************************************************
** Form generated from reading UI file 'areaselectordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREASELECTORDIALOG_H
#define UI_AREASELECTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AreaSelectorDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *areaGroup;
    QVBoxLayout *verticalLayout;
    QRadioButton *boundingBox;
    QRadioButton *moduleRectangle;
    QRadioButton *viewport;
    QHBoxLayout *marginLayout;
    QLabel *marginLabel;
    QSpinBox *margin;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AreaSelectorDialog)
    {
        if (AreaSelectorDialog->objectName().isEmpty())
            AreaSelectorDialog->setObjectName("AreaSelectorDialog");
        verticalLayout_2 = new QVBoxLayout(AreaSelectorDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        areaGroup = new QGroupBox(AreaSelectorDialog);
        areaGroup->setObjectName("areaGroup");
        verticalLayout = new QVBoxLayout(areaGroup);
        verticalLayout->setObjectName("verticalLayout");
        boundingBox = new QRadioButton(areaGroup);
        boundingBox->setObjectName("boundingBox");
        boundingBox->setChecked(true);

        verticalLayout->addWidget(boundingBox);

        moduleRectangle = new QRadioButton(areaGroup);
        moduleRectangle->setObjectName("moduleRectangle");

        verticalLayout->addWidget(moduleRectangle);

        viewport = new QRadioButton(areaGroup);
        viewport->setObjectName("viewport");

        verticalLayout->addWidget(viewport);


        verticalLayout_2->addWidget(areaGroup);

        marginLayout = new QHBoxLayout();
        marginLayout->setObjectName("marginLayout");
        marginLabel = new QLabel(AreaSelectorDialog);
        marginLabel->setObjectName("marginLabel");

        marginLayout->addWidget(marginLabel);

        margin = new QSpinBox(AreaSelectorDialog);
        margin->setObjectName("margin");
        margin->setMaximum(100);
        margin->setValue(20);

        marginLayout->addWidget(margin);

        marginLayout->setStretch(0, 3);
        marginLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(marginLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AreaSelectorDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AreaSelectorDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AreaSelectorDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AreaSelectorDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AreaSelectorDialog);
    } // setupUi

    void retranslateUi(QDialog *AreaSelectorDialog)
    {
        AreaSelectorDialog->setWindowTitle(QCoreApplication::translate("AreaSelectorDialog", "Select Area", nullptr));
        areaGroup->setTitle(QCoreApplication::translate("AreaSelectorDialog", "Area:", nullptr));
        boundingBox->setText(QCoreApplication::translate("AreaSelectorDialog", "All graphical elements", nullptr));
        moduleRectangle->setText(QCoreApplication::translate("AreaSelectorDialog", "Module rectangle", nullptr));
        viewport->setText(QCoreApplication::translate("AreaSelectorDialog", "Viewport", nullptr));
        marginLabel->setText(QCoreApplication::translate("AreaSelectorDialog", "Margin (px):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AreaSelectorDialog: public Ui_AreaSelectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREASELECTORDIALOG_H
