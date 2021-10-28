#include "Local.h"

Local::Local(){ }
Local::Local(std::string nome, int tipo){
    this->nome = nome;
    this->tipo = tipo;
}
Local::~Local(){
    std::cout << "Deletando Local" << std::endl;
}

void Local::addInsumoArr(Insumo *in, int index){
    InsumorArr[index] = in[index];
}
void Local::addInsumoVec(Insumo *in){
    this->InsumosVec.push_back(in);
}

std::string Local::get_nome(){ return nome; }
int Local::get_tipo(){ return tipo; }

void Local::set_nome(std::string nome){ this->nome = nome; }
void Local::set_tipo(int tipo){ this->tipo = tipo; }