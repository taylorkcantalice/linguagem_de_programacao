#include "Conta.h"

Conta::Conta(){ saldo = 0; }
Conta::Conta(std::string nomeCliente, int numero, double salario) : ContaCorrente(salario){
    this->nomeCliente = nomeCliente;
    this->numero = numero;
}

void Conta::sacar(double valor){
    if(valor > saldoTotalDisponivel()){
        std::cout << "\nsaldo insuficiente" << std::endl;
    } else {
        this->saldo = saldo - valor;
    }
}

void Conta::depositar(double valor){ this->saldo = saldo + valor; }

double Conta::saldoTotalDisponivel(){
    double total = definirLimite() + get_saldo();
    return total;
}

std::string Conta::get_nomeCliente(){ return nomeCliente; }
int Conta::get_numero(){ return numero; }
double Conta::get_saldo(){ return saldo; }

void Conta::set_nomeCliente(std::string nomeCliente){ this->nomeCliente = nomeCliente;}
void Conta::set_numero(int numero){ this->numero = numero; }
//void Conta::set_saldo(double saldo){ this->saldo = saldo; }