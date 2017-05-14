#include <QtGui>
#include <QtWidgets>

#include "consultar.h"

Consultar::Consultar(QWidget *parent)
    :QDialog(parent)
{
    label = new QLabel(tr("Find &what:"));
       lineEdit = new QLineEdit;
       label->setBuddy(lineEdit);

       caseCheckBox = new QCheckBox(tr("Match &case"));
       backwardCheckBox = new QCheckBox(tr("Search &backward"));

       findButton = new QPushButton(tr("&Find"));
       findButton->setDefault(true);
       findButton->setEnabled(false);

       closeButton = new QPushButton(tr("Close"));

       connect(lineEdit, SIGNAL(textChanged(const QString &)),
               this, SLOT(enableFindButton(const QString &)));
       connect(findButton, SIGNAL(clicked()),
               this, SLOT(findClicked()));
       connect(closeButton, SIGNAL(clicked()),
               this, SLOT(close()));

       QHBoxLayout *topLeftLayout = new QHBoxLayout;
       topLeftLayout->addWidget(label);
       topLeftLayout->addWidget(lineEdit);

       QVBoxLayout *leftLayout = new QVBoxLayout;
       leftLayout->addLayout(topLeftLayout);
       leftLayout->addWidget(caseCheckBox);
       leftLayout->addWidget(backwardCheckBox);

       QVBoxLayout *rightLayout = new QVBoxLayout;
       rightLayout->addWidget(findButton);
       rightLayout->addWidget(closeButton);
       rightLayout->addStretch();

       QHBoxLayout *mainLayout = new QHBoxLayout;
       mainLayout->addLayout(leftLayout);
       mainLayout->addLayout(rightLayout);
       setLayout(mainLayout);

       setWindowTitle(tr("Find"));
       setFixedHeight(sizeHint().height());
       setFixedWidth(sizeHint().width());
}

void Consultar::findClicked(){

}

void Consultar::enableFindButton(const QString &text){

}
