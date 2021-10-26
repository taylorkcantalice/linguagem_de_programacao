#ifndef ASSALARIADO
#define ASSALARIADO

#include "Funcionario.h"

class Assalariado : public Funcionario{
protected:
    double salario;
public:
    Assalariado();
    Assalariado(double salario);

    double calcularSalario();

    double get_salario();
    void set_salario(double salario);
};

#endif