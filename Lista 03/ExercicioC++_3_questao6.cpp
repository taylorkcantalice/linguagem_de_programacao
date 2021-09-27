/**
 ============================================================================
 Nome      : ExercicioC++_3_questao6.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Funcionário Herança
 ============================================================================
**/

#include <iostream>
#include <string>

class Funcionario{
protected:
    int matricula;
    std::string nome;
    float salario;
public:
    void set_matricula(int matricula){ this->matricula = matricula; }
    void set_nome(std::string nome){ this->nome = nome; }
    void set_salario(float salario){ this->salario = salario; }

    int get_matricula(){ return matricula; }
    std::string get_nome(){ return nome; }
    float get_salario(){ return salario; }
};

class Consultor : public Funcionario{
public:
    float getSalario(){ return salario + salario*10/100; }
    float getSalario(float percentual){ return salario + salario*percentual; }
};

int main(){
    int matricula;
    std::string nome;
    float salario;
    Funcionario f;
    Consultor c;

    /* FUNCIONARIO */
    std::cin >> matricula;
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cin >> salario;

    f.set_matricula(matricula);
    f.set_nome(nome);
    f.set_salario(salario);

    /* CONSULTOR */
    std::cin >> matricula;
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cin >> salario;

    c.set_matricula(matricula);
    c.set_nome(nome);
    c.set_salario(salario);

    std::cout << f.get_matricula() << " - " << f.get_nome() << " - R$ " << f.get_salario() << std::endl;
    std::cout << c.get_matricula() << " - " << c.get_nome() << " - R$ " << c.getSalario() << std::endl;

    return 0;
}