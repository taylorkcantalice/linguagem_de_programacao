/**
 ============================================================================
 Nome      : ExercicioC++_2_questao9.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Invoice - 02
 ============================================================================
 */

#include <iostream>
#include <string>

using namespace std;

class Invoice{
    int numero;
    string descricao;
    int quantidade_comprada;
    float preco;

public:
    Invoice(){
        numero = 0;
        descricao = '0';
        quantidade_comprada = 0;
        preco = 0;
    }
    int get_numero(){ return numero; }
    string get_descricao(){ return descricao; }
    int get_quantidade_comprada(){ return quantidade_comprada; }
    float get_preco(){ return preco; }

    void set_numero(int valor){ numero = valor; }
    void set_descricao(string nome){ descricao = nome; }
    void set_quantidade_comprada(int valor){ 
        if(valor > 0){
            quantidade_comprada = valor; 
        }
    }
    void set_preco(float valor){ 
        if(valor > 0){
            preco = valor;
        }
    }
    
    float getInvoiceAmount(){ return quantidade_comprada*preco; }
};

int main(){
    int numero, quantidade;
    float preco;
    string nome;

    Invoice fatura[2];

    for(int i = 0; i < 2; i++){
        cin >> numero;
        cin.ignore();
        getline(cin, nome);
        cin >> quantidade >> preco;

        fatura[i].set_numero(numero);
        fatura[i].set_descricao(nome);
        fatura[i].set_quantidade_comprada(quantidade);
        fatura[i].set_preco(preco);
    }

    for(int i = 0; i < 2; i++){
        cout << fatura[i].get_numero() << " - " << fatura[i].get_descricao() << " - " <<
                fatura[i].get_quantidade_comprada() << " - " << fatura[i].get_preco() << " - " <<
                fatura[i].getInvoiceAmount() << endl;
    }

    return 0;
}