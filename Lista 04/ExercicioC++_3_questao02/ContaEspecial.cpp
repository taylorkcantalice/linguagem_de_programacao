#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){ }

ContaEspecial::ContaEspecial(double salario){ this->salario = salario; }

double ContaEspecial::definirLimite(){ return 4*salario; }

double ContaEspecial::saldoTotalDisponivel(){ }

double ContaEspecial::get_salario(){ return salario; }
double ContaEspecial::get_limite(){ return limite; }

void ContaEspecial::set_salario(double salario){ this->salario = salario; }
void ContaEspecial::set_limite(double limite){ this->limite = limite; }