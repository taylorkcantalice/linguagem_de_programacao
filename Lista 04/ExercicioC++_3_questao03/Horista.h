#ifndef HORISTA
#define HORISTA

#include "Funcionario.h"S

class Horista : public Funcionario{
protected:
    double salarioPorHora;
    double horasTrabalhadas;
public:
    Horista();
    Horista(double salarioPorHora, double horasTrabalhadas, std::string nome, int matricula);

    double calcularSalario();

    double get_salarioPorHora();
    double get_horasTrabalhadas();

    void set_salarioPorHora(double salarioPorHora);
    void set_horasTrabalhadas(double horasTrabalhadas);
};

#endif