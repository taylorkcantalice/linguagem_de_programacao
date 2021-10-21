#ifndef CONTACORRENTE
#define CONTACORRENTE

#include "ContaEspecial.h"

class ContaCorrente : public ContaEspecial{
public:
    ContaCorrente();
    ContaCorrente(double salario);

    double definirLimite();

    virtual double saldoTotalDisponivel() override;
};

#endif