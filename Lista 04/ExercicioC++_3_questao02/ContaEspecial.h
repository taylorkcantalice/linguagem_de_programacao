#ifndef CONTAESPECIAL
#define CONTAESPECIAL

#include <iostream>

class ContaEspecial{
protected:
    double salario;
    double limite;
public:
    ContaEspecial();
    ContaEspecial(double salario);
    double definirLimite();

    virtual double saldoTotalDisponivel();

    double get_salario();
    double get_limite();

    void set_salario(double salario);
    void set_limite(double limite);
};

#endif