/**
 ============================================================================
 Nome      : ExercicioC-2 - questao5.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Pessoa - 01
 ============================================================================
 */

#include <iostream>
#include <string>

class Pessoa{
    public:
        std::string nome;
        int idade;
        std::string telefone;

    Pessoa(){
        nome = "vazio";
        idade = 0;
        telefone = "vazio";
    }
};

int main(){
    Pessoa pessoas[2];

    for(int i = 0; i < 2; i++){
        std::getline(std::cin, pessoas[i].nome);
        std::cin >> pessoas[i].idade;
        std::cin.ignore();
        std::getline(std::cin, pessoas[i].telefone);
    }

    for(int i = 0; i < 2; i++){
        std::cout << pessoas[i].nome << ", " << pessoas[i].idade << ", " << pessoas[i].telefone << std::endl;
    }

    return 0;
}
