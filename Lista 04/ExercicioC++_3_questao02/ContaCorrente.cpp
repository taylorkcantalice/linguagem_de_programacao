#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){ }

ContaCorrente::ContaCorrente(double salario) : ContaEspecial(salario){ }

double ContaCorrente::definirLimite(){ return 2*salario; }

double ContaCorrente::saldoTotalDisponivel(){ }