/********************************************************************************
** Form generated from reading UI file 'messageprintertagsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEPRINTERTAGSDIALOG_H
#define UI_MESSAGEPRINTERTAGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_messageprintertagsdialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *messageprintertagsdialog)
    {
        if (messageprintertagsdialog->objectName().isEmpty())
            messageprintertagsdialog->setObjectName("messageprintertagsdialog");
        messageprintertagsdialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tools/winconfig"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        messageprintertagsdialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(messageprintertagsdialog);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(messageprintertagsdialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        label = new QLabel(messageprintertagsdialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listWidget = new QListWidget(messageprintertagsdialog);
        listWidget->setObjectName("listWidget");
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);


        retranslateUi(messageprintertagsdialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, messageprintertagsdialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, messageprintertagsdialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(messageprintertagsdialog);
    } // setupUi

    void retranslateUi(QDialog *messageprintertagsdialog)
    {
        messageprintertagsdialog->setWindowTitle(QCoreApplication::translate("messageprintertagsdialog", "Message Display Configuration", nullptr));
        label->setText(QCoreApplication::translate("messageprintertagsdialog", "Message display options:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class messageprintertagsdialog: public Ui_messageprintertagsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEPRINTERTAGSDIALOG_H
