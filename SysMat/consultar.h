#ifndef CONSULTAR_H
#define CONSULTAR_H

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

class Consultar : public QDialog
{
    Q_OBJECT

public:
    Consultar(QWidget *parent=0);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *_nameFind;
    QLineEdit *_nameLine;
    //QCheckBox *caseCheckBox;
    //QCheckBox *backwardCheckBox;
    QPushButton *_findButton,*_closeButton;
};

#endif // CONSULTAR_H
