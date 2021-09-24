/**
 ============================================================================
 Nome      : ExercicioC++_3_questao1.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.2
 Descricao : [OO] Sistema de Controle de Pagamentos
 ============================================================================
**/

#include <iostream>
#include <string>

class Pagamento{
    float valorPagamento;
    std::string nomeDoFuncionario;

public:
    Pagamento(){ valorPagamento = 0; }

    void set_valorPagamento(float valorPagamento){ this->valorPagamento = valorPagamento; }
    void set_nomeDoFuncionario(std::string nomeDoFuncionario){ this->nomeDoFuncionario = nomeDoFuncionario; }

    float get_valorPagamento(){ return valorPagamento; }
    std::string get_nomeDoFuncionario(){ return nomeDoFuncionario; }
};

class ControleDePagamentos{
    Pagamento *pagamentos;
    int quantidadeDePagamentos;

public:
    ControleDePagamentos(int quantidadeDePagamentos){ 
        this->pagamentos = new Pagamento[quantidadeDePagamentos];
        this->quantidadeDePagamentos = quantidadeDePagamentos;
    }

    void setPagamento(Pagamento p, int index){ pagamentos[index] = p; }

    Pagamento getPagamento(int pos){ return pagamentos[pos]; }

    float calculaTotalDePagamentos(){
        int total = 0;
        for(int i = 0; i < quantidadeDePagamentos; i++){
            total += pagamentos[i].get_valorPagamento();
        }
        return total;
    }

    int getIndexFuncionario(std::string nomeFuncionario){
        for(int i = 0; i < quantidadeDePagamentos; i++){
            if(pagamentos[i].get_nomeDoFuncionario().find(nomeFuncionario) != pagamentos[i].get_nomeDoFuncionario().npos){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    int quantidadeDePagamentos, indice;
    float valor;
    std::string nome;
    Pagamento p;

    std::cin >> quantidadeDePagamentos;

    ControleDePagamentos pagamentos = ControleDePagamentos(quantidadeDePagamentos);

    for(int i = 0; i < quantidadeDePagamentos; i++){
        std::cin >> valor;
        std::cin.ignore();
        std::getline(std::cin, nome);  

        p.set_nomeDoFuncionario(nome);
        p.set_valorPagamento(valor);

        pagamentos.setPagamento(p, i);    
    }

    std::getline(std::cin, nome);
    indice = pagamentos.getIndexFuncionario(nome);

    if(indice != -1){
        std::cout << pagamentos.getPagamento(indice).get_nomeDoFuncionario() << ": R$ " <<
                 pagamentos.getPagamento(pagamentos.getIndexFuncionario(nome)).get_valorPagamento() << std::endl;
    } else {
        std::cout << nome << " não encontrado(a)." << std::endl;
    }

    std::cout << "Total: R$ " << pagamentos.calculaTotalDePagamentos() << std::endl;

    return 0;
}