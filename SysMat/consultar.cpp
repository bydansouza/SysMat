#include <QtGui>
#include <QtWidgets>

#include "consultar.h"

Consultar::Consultar(QWidget *parent)
    :QDialog(parent)
{
    _nameFind = new QLabel(tr("Nome:"));
    _nameLine = new QLineEdit;
    _nameFind->setBuddy(_nameLine);

    _findButton = new QPushButton(tr("Procurar"));
    _findButton->setDefault(true);
    _findButton->setEnabled(true);

    _closeButton = new QPushButton(tr("Fechar"));

    connect(_nameLine, SIGNAL(textChanged(const QString &)),
               this, SLOT(enableFindButton(const QString &)));
    connect(_findButton, SIGNAL(clicked()),
               this, SLOT(findClicked()));
    connect(_closeButton, SIGNAL(clicked()),
               this, SLOT(close()));

    QHBoxLayout *topLeftLayout = new QHBoxLayout;
    topLeftLayout->addWidget(_nameFind);
    topLeftLayout->addWidget(_nameLine);
    topLeftLayout->addWidget(_findButton);
    topLeftLayout->addWidget(_closeButton);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(topLeftLayout);

//    QVBoxLayout *rightLayout = new QVBoxLayout;
//    rightLayout->addWidget(_findButton);
//    rightLayout->addStretch();

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
//    mainLayout->addLayout(rightLayout);

    setLayout(mainLayout);
    setWindowTitle(tr("Procurar"));
    setFixedHeight(sizeHint().height());
    setFixedWidth(sizeHint().width());
}

void Consultar::findClicked(){

}

void Consultar::enableFindButton(const QString &text){

}
