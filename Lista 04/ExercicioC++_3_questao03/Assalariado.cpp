#include "Assalariado.h"

Assalariado::Assalariado(){ salario = 0; }
Assalariado::Assalariado(double salario, std::string nome, int matricula)
        : Funcionario(nome, matricula){ 
            this->salario = salario;
}

double Assalariado::calcularSalario(){ return salario; }

double Assalariado::get_salario(){ return salario; }
void Assalariado::set_salario(double salario){ this->salario = salario; }