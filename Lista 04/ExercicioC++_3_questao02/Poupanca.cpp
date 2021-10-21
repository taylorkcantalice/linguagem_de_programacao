#include "Poupanca.h"

Poupanca::Poupanca(){ 
    variacao = 51;
    taxaRendimento = 0.006;
}

Poupanca::Poupanca(int variacao, double taxaRendimento){
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;
}

double Poupanca::render(){
    if(variacao == 1){
        return taxaRendimento+0.005;
    }else if(variacao == 51){
        return taxaRendimento;
    }
}

int Poupanca::get_variacao(){ return variacao; }
double Poupanca::get_taxaRendimento(){ return taxaRendimento; }

void Poupanca::set_variacao(int variacao){ this->variacao = variacao; }
void Poupanca::set_taxaRendimento(double taxaRendimento){ this->taxaRendimento = taxaRendimento; }