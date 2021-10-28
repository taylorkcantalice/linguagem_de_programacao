#include "Vacina.h"

Vacina::Vacina() : Insumo(){ }
Vacina::Vacina(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string dtAdquirida,
            std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo) 
    : Insumo(nome, quantidade, valorUnitario, dtVencimento, dtAdquirida, nomeFabricante){
        this->tipo = tipo;
        this->quantDoses = quantDoses;
        this->intervalo = intervalo;
}
Vacina::~Vacina(){
    std::cout << "Deletando Vacina" << std::endl;
}

std::string Vacina::get_tipo(){ return tipo; }
int Vacina::get_quantDoses(){ return quantDoses; }
int Vacina::get_intervalo(){ return intervalo; }

void Vacina::set_tipo(std::string tipo){ this->tipo = tipo; }
void Vacina::set_quantDoses(int quantDoses){ this->quantDoses = quantDoses; }
void Vacina::set_intervalo(int intervalo){ this->intervalo = intervalo; }