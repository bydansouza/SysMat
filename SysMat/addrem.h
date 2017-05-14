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
    QLabel *_nome,*_id,*_mail,*_phone,*_pass;
    QLineEdit *_lineNome,*_lineId,*_lineMail,*_linePhone,*_linePass;
    //QCheckBox *caseCheckBox;
    //QCheckBox *backwardCheckBox;
    //QPushButton *findButton;
    //QPushButton *closeButton;
};

#endif // ADDREM_H
