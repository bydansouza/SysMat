#include <QtGui>
#include <QtWidgets>

#include "addrem.h"

AddRem::AddRem(QWidget *parent,user_t _type)
    :QDialog(parent)
{
    _nome = new QLabel(tr("Nome:"));
    _id = new QLabel(tr("ID(Matricula):"));
    _mail = new QLabel(tr("E-mail"));
    _phone = new QLabel(tr("Fone:"));
    _pass = new QLabel(tr("Senha de Acesso:"));

    if(_type == Aluno){

    }

    _lineNome = new QLineEdit;
    _lineId = new QLineEdit;
    _lineMail = new QLineEdit;
    _linePhone = new QLineEdit;
    _linePass = new QLineEdit;
    _linePass->setEchoMode(QLineEdit::Password); //set QlineEdit to password type

    _nome->setBuddy(_lineNome);
    _id->setBuddy(_lineId);
    _mail->setBuddy(_lineMail);
    _phone->setBuddy(_linePhone);
    _pass->setBuddy(_linePass);

    //Criando uma HBox com o _nome e _lineNome
    QHBoxLayout *lineOne = new QHBoxLayout;
    lineOne->addWidget(_nome);
    lineOne->addWidget(_lineNome);

    QHBoxLayout *lineTwo = new QHBoxLayout;
    lineTwo->addWidget(_id);
    lineTwo->addWidget(_lineId);
    lineTwo->addWidget(_phone);
    lineTwo->addWidget(_linePhone);

    QHBoxLayout *lineTree = new QHBoxLayout;
    lineTree->addWidget(_mail);
    lineTree->addWidget(_lineMail);

    QHBoxLayout *lineFour = new QHBoxLayout;
    lineFour->addWidget(_pass);
    lineFour->addWidget(_linePass);

    //Criando uam VBox com as três linhas previamente criadas
    QVBoxLayout *janelaAddRem = new QVBoxLayout;
    janelaAddRem->addLayout(lineOne);
    janelaAddRem->addLayout(lineTwo);
    janelaAddRem->addLayout(lineTree);
    janelaAddRem->addLayout(lineFour);

    setLayout(janelaAddRem);
    setWindowTitle("Adcionar ou Remover Usuário");
    setFixedHeight(sizeHint().height());
    setFixedWidth(sizeHint().width());
}
