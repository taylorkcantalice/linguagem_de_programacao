/**
 ============================================================================
 Nome      : ExercicioC++_2_questao6.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Invoice - 01
 ============================================================================
 */

#include <iostream>
#include <string>

class Invoice{
    public:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;

        double getInvoiceAmount(){
            return (quantidade*1.0)*preco;
        }
        void quantInvalida(){
            if(quantidade < 0){
                quantidade = 0;
            }
        }
        void precoInvalida(){
            if(preco < 0){
                preco = 0;
            }
        }

    Invoice(){
        numero = 0;
        descricao = '0';
        quantidade = 0;
        preco = 0.0;
    }
};

int main(){
    Invoice produtos[2];

    for(int i = 0; i < 2; i++){
        std::cin >> produtos[i].numero;
        std::cin.ignore();
        std::getline(std::cin, produtos[i].descricao);
        std::cin >> produtos[i].quantidade;
        produtos[i].quantInvalida();
        std::cin >> produtos[i].preco;
        produtos[i].precoInvalida();
    }

    for(int i = 0; i < 2; i++){
        std::cout << produtos[i].numero << " - " << produtos[i].descricao << " - " << 
                    produtos[i].quantidade << " - " << produtos[i].preco << " - " <<
                    produtos[i].getInvoiceAmount() << std::endl;
    }

    return 0;
}