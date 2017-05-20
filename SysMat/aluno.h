#ifndef ALUNO_H
#define ALUNO_H

#include "usuario.h"
#include <QObject>
#include <QWidget>
#include <QDate>

class Aluno: public Usuario{
public:
    Aluno();

private:
    //Usuario *_dados;
    QDate *_yearIngress;

};

#endif // ALUNO_H
