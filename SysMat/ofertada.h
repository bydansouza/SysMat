#ifndef OFERTADA_H
#define OFERTADA_H

#include <QObject>
#include <QWidget>
#include <QVector>
#include <QDate>
#include "disciplinas.h"
#include "professor.h"
#include "inscricao.h"
#include "horarioaulas.h"

class Ofertada{
public:
    Ofertada();

private:
    Disciplinas *_disc;
    Professor *_prof;
    QVector<Inscricao> *_inscritos;
    QVector<HorarioAulas> *_horario;
    QDate *_start,*_end,*_year,*_semestre;
};

#endif // OFERTADA_H
