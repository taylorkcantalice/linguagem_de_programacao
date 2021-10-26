#ifndef COMISSIONADO
#define COMISSIONADO

#include "Funcionario.h"

class Comissionado : public Funcionario{
protected:
    double vendasMensais;
    double percentualComissao;
public:
    Comissionado();
    Comissionado(double vendasMensais, double percentualComissao);

    double calcularSalario();
    
    double get_vendasMensais();
    double get_percentualComissao();

    void set_vendasMensais(double vendasMensais);
    void set_percentualComissao(double percentualComissao);
};

#endif