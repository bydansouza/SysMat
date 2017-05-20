#ifndef GLOBALDEFINES_H
#define GLOBALDEFINES_H

typedef enum user_t{
    Aluno=0,
    Professor,
    Disciplina,
}user_t;

typedef enum diaSemana_t{
    Domingo=0,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado,
}diaSemana_t;

typedef enum horarioDia_t{
    Manha_1=1,
    Manha_2,
    Manha_3,
    Manha_4,
    Almoco,
    Tarde_1,
    Tarde_2,
    Tarde_3,
    Tarde_4,
    Intervalo,
    Noite_1,
    Noite_2,
    Noite_3,
    Noite_4,
}horarioDia_t;

#endif // GLOBALDEFINES_H
