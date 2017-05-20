#ifndef DISCIPLINAS_H
#define DISCIPLINAS_H

#include <QObject>
#include <QWidget>
#include <QString>
#include <QVector>
#include "professor.h"


class Disciplinas{
public:
    Disciplinas();

private:
    QString *_cod,*_name;
    int *_cargaH,*_faseCurso;
    QVector<Professor> *_profs_habilitados;
    QVector<Disciplinas> *_reqDisc;
};

#endif // DISCIPLINAS_H
