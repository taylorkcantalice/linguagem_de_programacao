#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){ }
SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento_maximo){
    this->orcamento_maximo = orcamento_maximo;
}


double SistemaGerenciaFolha::calcularValorTotalFolha(){
    double total = 0;

    for(auto& it : funcionarios){
        total += it->calculaSalario();
    }

    return total;   
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome){
    for(auto& it : funcionarios){
        if(it->get_nome() == nome){
            return it->calculaSalario();
        }
    }

    return 0;
}

void SistemaGerenciaFolha::set_funcionarios(Funcionario *funcionarios){
    this->funcionarios.push_back(funcionarios);
}

double SistemaGerenciaFolha::get_orcamento_maximo(){ return orcamento_maximo; }
