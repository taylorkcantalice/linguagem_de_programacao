#include "Trabalhador.h"

Trabalhador::Trabalhador(){ 
    salario = 0; 
}

std::string Trabalhador::get_nome(){ 
    return nome; 
}

float Trabalhador::get_salario(){ 
    return salario; 
}

void Trabalhador::set_nome(std::string nome){ 
    this->nome = nome; 
}

void Trabalhador::set_salario(float salario){ 
    this->salario = salario; 
}