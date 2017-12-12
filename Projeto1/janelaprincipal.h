#ifndef JANELAPRINCIPAL_H
#define JANELAPRINCIPAL_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>

namespace Ui {
class janelaPrincipal;
}

class janelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit janelaPrincipal(QWidget *parent = 0);
    ~janelaPrincipal();

private:
    Ui::janelaPrincipal *ui;
};

#endif // JANELAPRINCIPAL_H
