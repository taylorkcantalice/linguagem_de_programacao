/**
 ============================================================================
 Nome      : ExercicioC++_2_questao7.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Funcionário - 01
 ============================================================================
 */

#include <iostream>
#include <string>

class Funcionario{
    public:
        std::string nome;
        std::string sobrenome;
        double salario;

        float getSalarioAnual(){
            return salario*12;
        }

    Funcionario(){
        nome = '0';
        sobrenome = '0';
        salario = 0;
    }
};

int main(){
    int N;

    std::cin >> N;

    Funcionario funcionarios[N];

    for(int i = 0; i < N; i++){
        std::cin.ignore();
        std::getline(std::cin, funcionarios[i].nome);
        std::getline(std::cin, funcionarios[i].sobrenome);
        std::cin >> funcionarios[i].salario;
    }

    for(int i = 0; i < N; i++){
        std::cout << funcionarios[i].nome << " " << funcionarios[i].sobrenome << " - " <<
                    funcionarios[i].salario << " - " << funcionarios[i].getSalarioAnual() <<
                    std::endl;
    }

    return 0;
}