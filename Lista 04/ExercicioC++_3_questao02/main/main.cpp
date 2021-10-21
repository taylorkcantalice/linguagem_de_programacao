#include <iostream>
#include <string>

class ContaEspecial{
protected:
    double salario;
    double limite;
public:
    ContaEspecial(){ }
    ContaEspecial(double salario){ this->salario = salario; }
    
    double definirLimite(){ return salario*4; }

    double get_salario(){ return salario; }
    int get_limite(){ return limite; }

    void set_salario(double salario){ this->salario = salario; }
    void set_limite(double limite){ this->limite = limite; }
};

class ContaCorrente : public ContaEspecial{
public:
    ContaCorrente(){ }
    ContaCorrente(double salario) : ContaEspecial(salario){ }

    double definirLimite(){ return salario*2; }

    double saldoTotalDisponivel(){ }
};

class Poupanca{
protected:
    int variacao;
    double taxaRendimento;
public:
    Poupanca(){
        variacao = 51;
        taxaRendimento = 0.006;
    }
    Poupanca(int variacao, double taxaRendimento){
        this->variacao = variacao;
        this->taxaRendimento = taxaRendimento;
    }
    
    double render(){
        if(variacao == 51){
            return taxaRendimento;
        } else {
            return taxaRendimento+0.005;
        }
    }
};

class Conta : public ContaCorrente, public Poupanca{
protected:
    std::string nomeCliente;
    int numero;
    double saldo;
public:
    Conta(){ saldo = 0; }
    Conta(std::string nomeCliente, int numero, double salario) : ContaCorrente(salario){
        this->nomeCliente = nomeCliente;
        this->numero = numero;
    }

    void sacar(double valor){
        if(valor > saldoTotalDisponivel()){
            std::cout << "\nsaldo insuficiente" << std::endl;
        } else {
            this->saldo = saldo - valor;
        }
    }

    void depositar(double valor){
        this->saldo = saldo + valor;
    }

    double saldoTotalDisponivel(){
        double total = definirLimite() + get_saldo();
        return total;
    }
    
    std::string get_nomeCliente(){ return nomeCliente; }
    int get_numero(){ return numero; }
    double get_saldo(){ return saldo; }

    void set_nomeCliente(std::string nomeCliente){ this->nomeCliente = nomeCliente; }
    void set_numero(int numero){ this->numero = numero; }
    //void set_saldo(double saldo){ this->saldo = saldo};
};

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
    std::cout << "saldo total disponível: R$ " << conta_corrente->definirLimite()+conta.get_saldo();
    std::cout << std::endl;

    std::getline(std::cin, nomeCliente);
    std::cin >> numero >> salario >> deposito >> saque;
    std::cin.ignore();

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
    std::cout << "saldo total disponível: R$ " << conta_especial->definirLimite()+conta.get_saldo();
    std::cout << std::endl;

    std::getline(std::cin, nomeCliente);
    std::cin >> numero >> deposito >> saque;
    std::cin.ignore();

    conta = Conta();
    poupanca = &conta;

    conta.set_nomeCliente(nomeCliente);
    conta.set_numero(numero);
    conta.set_salario(0);
    conta.depositar(deposito);

    std::cout << conta.get_nomeCliente();
    std::cout << ", cc: " << conta.get_numero() << ", ";
    conta.sacar(saque);
    std::cout << "saldo total disponível: R$ " << (poupanca->render()*conta.get_saldo())+conta.get_saldo();
    std::cout << std::endl;
}