#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{
    float valorDaHora;
public:
    TrabalhadorPorHora();
    TrabalhadorPorHora(float valorDaHora);
    float calcularPagamentoSemanal(int horasSemanais);
};

#endif