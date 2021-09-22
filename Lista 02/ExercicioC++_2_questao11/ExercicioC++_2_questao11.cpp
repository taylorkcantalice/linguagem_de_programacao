/**
 ============================================================================
 Nome      : ExercicioC++_2_questao11.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Pessoa - 02
 ============================================================================
 */

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    std::string nome;
    int idade;
    std::string telefone;

public:
    Pessoa(){
        nome = '0';
        idade = 0;
        telefone = '0';
    }
    Pessoa(std::string str){
        nome = str;
    }
    Pessoa(std::string str, int valor, std::string numero){
        nome = str;
        idade = valor;
        telefone = numero;
    }

    std::string get_nome(){ return nome; }
    int get_idade(){ return idade; }
    std::string get_telefone(){ return telefone; }

    void set_nome(std::string str){ nome = str; }
    void set_idade(int valor){ idade = valor; }
    void set_telefone(std::string str){ telefone = str; }
};

int main(){
    int N;
    std::string str_nome, str_telefone;
    int valor_idade;
    std::string pesquisa;
    bool encontrou = false;

    std::cin >> N;
    std::cin.ignore();

    Pessoa pessoas[N];

    for(int i = 0; i < N; i++){
        std::getline(std::cin, str_nome);

        std::cin >> valor_idade;
        std::cin.ignore();

        std::getline(std::cin, str_telefone);

        pessoas[i] = Pessoa(str_nome, valor_idade, str_telefone);
    }

    std::getline(std::cin, pesquisa);
    for(int i = 0; i < N; i++){
        if(pessoas[i].get_nome().find(pesquisa) != std::string::npos){
            encontrou = true;
            std::cout << pessoas[i].get_nome() << ", " << pessoas[i].get_idade() << ", " <<
                         pessoas[i].get_telefone() << std::endl;
        }
    }

    if(!encontrou){
        std::cout << "Pessoa não encontrada" << std::endl;
    }

    return 0;
}