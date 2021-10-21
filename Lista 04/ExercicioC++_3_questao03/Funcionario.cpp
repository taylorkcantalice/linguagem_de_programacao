#include "Funcionario.h"

Funcionario::Funcionario(){ }
Funcionario::Funcionario(std::string nome, int matricula){
    this->nome = nome;
    this->matricula = matricula;
}

double Funcionario::calcularSalario(){

}

std::string Funcionario::get_nome(){ return nome; }
int Funcionario::get_matricula(){ return matricula; }

void Funcionario::set_nome(std::string nome){ this->nome = nome; }
void Funcionario::set_matricula(int matricula){ this->matricula = matricula; }