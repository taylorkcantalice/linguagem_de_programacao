#include "Local.h"

Local::Local(){ }
Local::Local(std::string nome, std::string tipo){
    this->nome = nome;
    this->tipo = tipo;
}
Local::~Local(){
    std::cout << "Deletando Local" << std::endl;
}

void Local::addInsumoArr(Insumo in, int index){
    InsumorArr[index] = in;
}
void Local::addInsumoVec(Insumo *in){
    this->InsumosVec.push_back(in);
}

std::string Local::get_nome(){ return nome; }
std::string Local::get_tipo(){ return tipo; }

void Local::set_nome(std::string nome){ this->nome = nome; }
void Local::set_tipo(std::string tipo){ this->tipo = tipo; }