#ifndef USUARIO_H
#define USUARIO_H

#include <QObject>
#include <QWidget>
#include <QString>


class Usuario: public QObject{

public:
    Usuario();

protected:
    QString *_name,*_mail;
    int *_id,*_phone,*_pass;

};

#endif // USUARIO_H
