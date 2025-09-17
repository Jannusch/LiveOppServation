/********************************************************************************
** Form generated from reading UI file 'logfilterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFILTERDIALOG_H
#define UI_LOGFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_logfilterdialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QLabel *label_2;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit;
    QLabel *regexErrorLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *logfilterdialog)
    {
        if (logfilterdialog->objectName().isEmpty())
            logfilterdialog->setObjectName("logfilterdialog");
        logfilterdialog->resize(400, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tools/filter"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logfilterdialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(logfilterdialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(logfilterdialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout->addWidget(checkBox_2, 4, 1, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 2);

        regexErrorLabel = new QLabel(groupBox);
        regexErrorLabel->setObjectName("regexErrorLabel");
        regexErrorLabel->setStyleSheet(QString::fromUtf8("color: red;"));

        gridLayout->addWidget(regexErrorLabel, 5, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(logfilterdialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        treeWidget = new QTreeWidget(groupBox_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        treeWidget->setHeaderHidden(true);

        verticalLayout_2->addWidget(treeWidget);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(logfilterdialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(logfilterdialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, logfilterdialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, logfilterdialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(logfilterdialog);
    } // setupUi

    void retranslateUi(QDialog *logfilterdialog)
    {
        logfilterdialog->setWindowTitle(QCoreApplication::translate("logfilterdialog", "Filter Window Contents", nullptr));
        groupBox->setTitle(QCoreApplication::translate("logfilterdialog", "Line Filter", nullptr));
        checkBox->setText(QCoreApplication::translate("logfilterdialog", "Regular expression", nullptr));
        label_2->setText(QCoreApplication::translate("logfilterdialog", "Only show lines containing/matching: (clear to show all)", nullptr));
        checkBox_2->setText(QCoreApplication::translate("logfilterdialog", "Case sensitive", nullptr));
        regexErrorLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("logfilterdialog", "Module Filter", nullptr));
        label->setText(QCoreApplication::translate("logfilterdialog", "Select modules to show log messages for:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logfilterdialog: public Ui_logfilterdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFILTERDIALOG_H
