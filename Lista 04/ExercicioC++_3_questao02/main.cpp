#include "ContaEspecial.h"
#include "ContaEspecial.cpp"
#include "ContaCorrente.h"
#include "ContaCorrente.cpp"
#include "Poupanca.h"
#include "Poupanca.cpp"
#include "Conta.h"
#include "Conta.cpp"

#include <iostream>
#include <string>

int main(){
    ContaEspecial *conta_especial;
    ContaCorrente *conta_corrente;
    Poupanca *poupanca;
    Conta conta;

    std::string nomeCliente;
    int numero;
    double salario;
    double deposito;
    double saque;

    std::getline(std::cin, nomeCliente);
    std::cin >> numero >> salario >> deposito >> saque;
    std::cin.ignore();

    // CONTA CORRENTE
    conta = Conta();
    conta_corrente = &conta;
    
    conta.set_nomeCliente(nomeCliente);
    conta.set_numero(numero);
    conta.set_salario(salario);
    conta.depositar(deposito);

    std::cout << conta.get_nomeCliente();
    std::cout << ", cc: " << conta.get_numero();
    std::cout << ", salário " << conta_corrente->get_salario() << ", ";
    conta.sacar(saque);
    std::cout << "saldo total disponível: R$ " << conta_corrente->saldoTotalDisponivel();
    std::cout << std::endl;

    std::getline(std::cin, nomeCliente);
    std::cin >> numero >> salario >> deposito >> saque;
    std::cin.ignore();

    // CONTA ESPECIAL
    conta = Conta();
    conta_especial = &conta;

    conta.set_nomeCliente(nomeCliente);
    conta.set_numero(numero);
    conta.set_salario(salario);
    conta.depositar(deposito);

    std::cout << conta.get_nomeCliente();
    std::cout << ", cc: " << conta.get_numero();
    std::cout << ", salário " << conta_especial->get_salario() << ", ";
    conta.sacar(saque);
    std::cout << "saldo total disponível: R$ " << conta_especial->saldoTotalDisponivel();
    std::cout << std::endl;

    std::getline(std::cin, nomeCliente);
    std::cin >> numero >> deposito >> saque;
    std::cin.ignore();

    // POUPANÇA
    conta = Conta();
    poupanca = &conta;

    conta.set_nomeCliente(nomeCliente);
    conta.set_numero(numero);
    conta.set_salario(0);
    conta.depositar(deposito);

    std::cout << conta.get_nomeCliente();
    std::cout << ", cc: " << conta.get_numero() << ", ";
    conta.sacar(saque);
    std::cout << "saldo total disponível: R$ " << (poupanca->render()*conta.saldoTotalDisponivel())+conta.saldoTotalDisponivel();
    std::cout << std::endl;
}