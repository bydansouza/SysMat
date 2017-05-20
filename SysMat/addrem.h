#ifndef ADDREM_H
#define ADDREM_H

#include "globaldefines.h"
#include <QDialog>
#include "QLabel"
#include "QCheckBox"
#include "QLineEdit"
#include "QPushButton"

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class AddRem : public QDialog
{
    Q_OBJECT

public:
    AddRem(QWidget *parent=0, user_t _type=Aluno);

private:
    //Para Alunos e Professores
    QLabel *_nome,*_id,*_mail,*_phone,*_pass;
    QLineEdit *_lineNome,*_lineId,*_lineMail,*_linePhone,*_linePass;
    //QCheckBox *caseCheckBox;
    //QCheckBox *backwardCheckBox;

    //Para Disciplinas


    //Uso Geral
    QPushButton *_findButton,*_editButton,*_addButton,*_remButton;
};

#endif // ADDREM_H
