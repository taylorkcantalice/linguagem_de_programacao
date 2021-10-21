#ifndef SISTEMA
#define SISTEMA

#include "Funcionario.h"

#include <iostream>
#include <vector>

class SistemaGerenciaFolha{
    Funcionario funcionarios;
public:
    SistemaGerenciaFolha();

    double calcularValorTotalFolha();

    double consultaSalarioFuncionario(std::string nome);

    void set_funcionarios(Funcionario funcionarios);
};

#endif