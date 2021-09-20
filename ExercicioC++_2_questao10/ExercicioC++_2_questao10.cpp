/**
 ============================================================================
 Nome      : ExercicioC++_2_questao10.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Funcionário - 02
 ============================================================================
 */

#include <iostream>
#include <string>

class Funcionario {
    std::string nome, sobrenome;
    float salario;

public:
    std::string get_nome(){ return nome; }
    std::string get_sobrenome(){ return sobrenome; }
    float get_salario(){ return salario; }

    void set_nome(std::string str){ nome = str; }
    void set_sobrenome(std::string str){ sobrenome = str; }
    void set_salario(float valor){ if(valor > 0) salario = valor; }

    float getSalarioAnual(){ return salario*12; }
    void aumentaSalario(float percent){ salario = salario*(1.0 + percent); }
};

int main(){
    int N;
    std::string str;
    int valor;

    std::cin >> N;
    std::cin.ignore();

    Funcionario pessoa[N];

    for(int i = 0; i < N; i++){
        std::getline(std::cin, str);
        pessoa[i].set_nome(str);

        std::getline(std::cin, str);
        pessoa[i].set_sobrenome(str);

        std::cin >> valor;
        std::cin.ignore();
        pessoa[i].set_salario(valor);
    }

    for(int i = 0; i < N; i++){
        std::cout << pessoa[i].get_nome() << " " << pessoa[i].get_sobrenome() << " - " <<
                     pessoa[i].get_salario() << " - " << pessoa[i].getSalarioAnual() << std::endl;

        pessoa[i].aumentaSalario(0.1);
        std::cout << pessoa[i].getSalarioAnual()<< std::endl;
    }
}