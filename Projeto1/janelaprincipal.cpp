#include "janelaprincipal.h"
#include "ui_janelaprincipal.h"

janelaPrincipal::janelaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::janelaPrincipal)
{
    ui->setupUi(this);
}

janelaPrincipal::~janelaPrincipal()
{
    delete ui;
}
