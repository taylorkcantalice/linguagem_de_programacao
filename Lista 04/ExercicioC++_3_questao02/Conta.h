#ifndef CONTA
#define CONTA

#include "ContaCorrente.h"
#include "Poupanca.h"

#include <string>

class Conta : public ContaCorrente, public Poupanca{
protected:
    std::string nomeCliente;
    int numero;
    double saldo;
public:
    Conta();
    Conta(std::string nomeClinte, int numero, double salario);

    void sacar(double valor);
    void depositar(double valor);

    double saldoTotalDisponivel();

    std::string get_nomeCliente();
    int get_numero();
    double get_saldo();

    void set_nomeCliente(std::string nomeCliente);
    void set_numero(int numero);
    void set_saldo(double saldo);
};

#endif