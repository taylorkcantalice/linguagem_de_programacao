#ifndef ASSALARIADO
#define ASSALARIADO

#include "Funcionario.h"

class Assalariado : public Funcionario{
protected:
    double salario;
public:
    Assalariado();
    Assalariado(double salario,std::string nome, int matricula);

    double calcularSalario();

    double get_salario();
    void set_salario(double salario);
};

#endif