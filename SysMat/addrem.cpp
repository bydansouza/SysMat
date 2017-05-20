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

    _lineNome = new QLineEdit;
    _lineId = new QLineEdit;
    _lineMail = new QLineEdit;
    _linePhone = new QLineEdit;
    _linePass = new QLineEdit;
    _linePass->setEchoMode(QLineEdit::Password); //set QlineEdit to password type
    _linePass->setMaximumSize(200,50);

    _nome->setBuddy(_lineNome);
    _id->setBuddy(_lineId);
    _mail->setBuddy(_lineMail);
    _phone->setBuddy(_linePhone);
    _pass->setBuddy(_linePass);

    _findButton = new QPushButton(tr("Procurar"));
    _editButton = new QPushButton(tr("Alterar"));
    _addButton = new QPushButton(tr("Adicionar"));
    _remButton = new QPushButton(tr("Remover"));

    //_findButton->setDefault(true);
    _findButton->setEnabled(true);
    _editButton->setEnabled(true);
    _addButton->setEnabled(true);
    _remButton->setEnabled(true);

    //Criando uma HBox com o _nome e _lineNome
    QHBoxLayout *lineOne = new QHBoxLayout;
    lineOne->addWidget(_nome);
    lineOne->addWidget(_lineNome);
    lineOne->addWidget(_findButton);

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

     QHBoxLayout *lineFive = new QHBoxLayout;
     lineFive->addWidget(_editButton);
     lineFive->addWidget(_addButton);
     lineFive->addWidget(_remButton);

    //Criando uma VBox com as linhas previamente criadas
    QVBoxLayout *formGeral = new QVBoxLayout;
    formGeral->addLayout(lineOne);
    formGeral->addLayout(lineTwo);
    formGeral->addLayout(lineTree);
    formGeral->addLayout(lineFour);

    switch (_type) {
    case Aluno:

        formGeral->addLayout(lineFive);
        setLayout(formGeral);
        setWindowTitle("Alterar, Adicionar ou Remover Alunos");
        break;
    case Professor:

        formGeral->addLayout(lineFive);
        setLayout(formGeral);
        setWindowTitle("Alterar, Adicionar ou Remover Professores");
        break;
    case Disciplina:

        formGeral->addLayout(lineFive);
        setLayout(formGeral);
        setWindowTitle("Alterar, Adicionar ou Remover Disciplinas");
        break;
    }

    setFixedHeight(sizeHint().height());
    setFixedWidth(sizeHint().width());
}
