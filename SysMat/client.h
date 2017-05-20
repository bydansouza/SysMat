#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>

namespace Ui {
class Client;
}

class Client : public QWidget
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();

private slots:
    void on_tableWidget_cellChanged(int row, int column);

private:
    Ui::Client *ui;
};

#endif // CLIENT_H
