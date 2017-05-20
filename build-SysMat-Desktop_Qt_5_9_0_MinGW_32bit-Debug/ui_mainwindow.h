/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConsultar_Alun;
    QAction *actionAddRem_Alun;
    QAction *actionConsultar_Prof;
    QAction *actionAddRem_Prof;
    QAction *actionConsultar_Disc;
    QAction *actionAddRem_Disc;
    QWidget *centralWidget;
    QPushButton *Disciplinas;
    QPushButton *Alunos;
    QPushButton *Professores;
    QMenuBar *menuBar;
    QMenu *menuCadastramentos;
    QMenu *menuAlunos;
    QMenu *menuProfessores;
    QMenu *menuDisciplinas;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(581, 533);
        actionConsultar_Alun = new QAction(MainWindow);
        actionConsultar_Alun->setObjectName(QStringLiteral("actionConsultar_Alun"));
        actionAddRem_Alun = new QAction(MainWindow);
        actionAddRem_Alun->setObjectName(QStringLiteral("actionAddRem_Alun"));
        actionConsultar_Prof = new QAction(MainWindow);
        actionConsultar_Prof->setObjectName(QStringLiteral("actionConsultar_Prof"));
        actionAddRem_Prof = new QAction(MainWindow);
        actionAddRem_Prof->setObjectName(QStringLiteral("actionAddRem_Prof"));
        actionConsultar_Disc = new QAction(MainWindow);
        actionConsultar_Disc->setObjectName(QStringLiteral("actionConsultar_Disc"));
        actionAddRem_Disc = new QAction(MainWindow);
        actionAddRem_Disc->setObjectName(QStringLiteral("actionAddRem_Disc"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Disciplinas = new QPushButton(centralWidget);
        Disciplinas->setObjectName(QStringLiteral("Disciplinas"));
        Disciplinas->setGeometry(QRect(10, 10, 181, 101));
        Alunos = new QPushButton(centralWidget);
        Alunos->setObjectName(QStringLiteral("Alunos"));
        Alunos->setGeometry(QRect(200, 10, 181, 101));
        Professores = new QPushButton(centralWidget);
        Professores->setObjectName(QStringLiteral("Professores"));
        Professores->setGeometry(QRect(390, 10, 181, 101));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 581, 21));
        menuCadastramentos = new QMenu(menuBar);
        menuCadastramentos->setObjectName(QStringLiteral("menuCadastramentos"));
        menuAlunos = new QMenu(menuCadastramentos);
        menuAlunos->setObjectName(QStringLiteral("menuAlunos"));
        menuProfessores = new QMenu(menuCadastramentos);
        menuProfessores->setObjectName(QStringLiteral("menuProfessores"));
        menuDisciplinas = new QMenu(menuCadastramentos);
        menuDisciplinas->setObjectName(QStringLiteral("menuDisciplinas"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuCadastramentos->menuAction());
        menuCadastramentos->addAction(menuAlunos->menuAction());
        menuCadastramentos->addAction(menuProfessores->menuAction());
        menuCadastramentos->addAction(menuDisciplinas->menuAction());
        menuAlunos->addAction(actionConsultar_Alun);
        menuAlunos->addAction(actionAddRem_Alun);
        menuProfessores->addAction(actionConsultar_Prof);
        menuProfessores->addAction(actionAddRem_Prof);
        menuDisciplinas->addAction(actionConsultar_Disc);
        menuDisciplinas->addAction(actionAddRem_Disc);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionConsultar_Alun->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionAddRem_Alun->setText(QApplication::translate("MainWindow", "Adicionar/Remover", Q_NULLPTR));
        actionConsultar_Prof->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionAddRem_Prof->setText(QApplication::translate("MainWindow", "Adicionar/Remover", Q_NULLPTR));
        actionConsultar_Disc->setText(QApplication::translate("MainWindow", "Consultar", Q_NULLPTR));
        actionAddRem_Disc->setText(QApplication::translate("MainWindow", "Adicionar/Remover", Q_NULLPTR));
        Disciplinas->setText(QApplication::translate("MainWindow", "Disciplinas", Q_NULLPTR));
        Alunos->setText(QApplication::translate("MainWindow", "Alunos", Q_NULLPTR));
        Professores->setText(QApplication::translate("MainWindow", "Professores", Q_NULLPTR));
        menuCadastramentos->setTitle(QApplication::translate("MainWindow", "Cadastramentos", Q_NULLPTR));
        menuAlunos->setTitle(QApplication::translate("MainWindow", "Alunos", Q_NULLPTR));
        menuProfessores->setTitle(QApplication::translate("MainWindow", "Professores", Q_NULLPTR));
        menuDisciplinas->setTitle(QApplication::translate("MainWindow", "Disciplinas", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
