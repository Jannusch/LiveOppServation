/********************************************************************************
** Form generated from reading UI file 'fileeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEDITOR_H
#define UI_FILEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fileEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QLineEdit *filenameEdit;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *fileEditor)
    {
        if (fileEditor->objectName().isEmpty())
            fileEditor->setObjectName("fileEditor");
        fileEditor->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(fileEditor);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        filenameEdit = new QLineEdit(fileEditor);
        filenameEdit->setObjectName("filenameEdit");
        filenameEdit->setReadOnly(true);
        filenameEdit->setFrame(false);

        verticalLayout_2->addWidget(filenameEdit);

        plainTextEdit = new QPlainTextEdit(fileEditor);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_2->addWidget(plainTextEdit);


        retranslateUi(fileEditor);

        QMetaObject::connectSlotsByName(fileEditor);
    } // setupUi

    void retranslateUi(QDialog *fileEditor)
    {
        fileEditor->setWindowTitle(QCoreApplication::translate("fileEditor", "Dialog", nullptr));
        filenameEdit->setPlaceholderText(QCoreApplication::translate("fileEditor", "Filename", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fileEditor: public Ui_fileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEDITOR_H
