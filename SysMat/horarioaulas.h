#ifndef HORARIOAULAS_H
#define HORARIOAULAS_H

#include "globaldefines.h"
#include <QObject>
#include <QWidget>

class HorarioAulas{

public:
    HorarioAulas();

private:
    diaSemana_t *_diaSemana;
    horarioDia_t *_horarioDia;
};

#endif // HORARIOAULAS_H
