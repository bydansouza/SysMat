#ifndef INSCRICAO_H
#define INSCRICAO_H

#include <QObject>
#include <QWidget>
#include "ofertada.h"
#include "aluno.h"

class Inscricao{
public:
    Inscricao();

private:
    Aluno *_aluno;
    int *_conceito;
    Ofertada *_turma;
};

#endif // INSCRICAO_H
