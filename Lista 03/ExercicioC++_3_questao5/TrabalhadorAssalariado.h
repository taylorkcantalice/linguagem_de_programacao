#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{
public:
    TrabalhadorAssalariado();
    TrabalhadorAssalariado(float salario);
    float calcularPagamentoSemanal();
};

#endif