#ifndef FUNCIONARIO
#define FUNCIONARIO

#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

#include <string>

class Funcionario : public Assalariado, public Horista, public Comissionado{
    std::string nome;
    int matricula;
public:
    Funcionario();
    Funcionario(std::string nome, int matricula);

    double calcularSalario();

    std::string get_nome();
    int get_matricula();

    void set_nome(std::string nome);
    void set_matricula(int matricula);
};

#endif