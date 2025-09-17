/********************************************************************************
** Form generated from reading UI file 'logfinddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFINDDIALOG_H
#define UI_LOGFINDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogFindDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *text;
    QGridLayout *gridLayout;
    QCheckBox *wholeWordsCheckBox;
    QCheckBox *regexpCheckBox;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogFindDialog)
    {
        if (LogFindDialog->objectName().isEmpty())
            LogFindDialog->setObjectName("LogFindDialog");
        LogFindDialog->resize(303, 130);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tools/find"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogFindDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(LogFindDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(LogFindDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        text = new QLineEdit(LogFindDialog);
        text->setObjectName("text");

        horizontalLayout_2->addWidget(text);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        wholeWordsCheckBox = new QCheckBox(LogFindDialog);
        wholeWordsCheckBox->setObjectName("wholeWordsCheckBox");

        gridLayout->addWidget(wholeWordsCheckBox, 1, 0, 1, 1);

        regexpCheckBox = new QCheckBox(LogFindDialog);
        regexpCheckBox->setObjectName("regexpCheckBox");

        gridLayout->addWidget(regexpCheckBox, 0, 0, 1, 1);

        caseCheckBox = new QCheckBox(LogFindDialog);
        caseCheckBox->setObjectName("caseCheckBox");

        gridLayout->addWidget(caseCheckBox, 0, 1, 1, 1);

        backwardsCheckBox = new QCheckBox(LogFindDialog);
        backwardsCheckBox->setObjectName("backwardsCheckBox");

        gridLayout->addWidget(backwardsCheckBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LogFindDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(LogFindDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogFindDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogFindDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogFindDialog);
    } // setupUi

    void retranslateUi(QDialog *LogFindDialog)
    {
        LogFindDialog->setWindowTitle(QCoreApplication::translate("LogFindDialog", "Find", nullptr));
        label->setText(QCoreApplication::translate("LogFindDialog", "Find string:", nullptr));
        wholeWordsCheckBox->setText(QCoreApplication::translate("LogFindDialog", "&Whole words only", nullptr));
        regexpCheckBox->setText(QCoreApplication::translate("LogFindDialog", "&Regular expression", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("LogFindDialog", "Case &sensitive", nullptr));
        backwardsCheckBox->setText(QCoreApplication::translate("LogFindDialog", "Search &backwards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogFindDialog: public Ui_LogFindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFINDDIALOG_H
