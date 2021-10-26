#include "Funcionario.h"
#include "Funcionario.cpp"

#include "Assalariado.h"
#include "Assalariado.cpp"
#include "Horista.h"
#include "Horista.cpp"
#include "Comissionado.h"
#include "Comissionado.cpp"

#include "SistemaGerenciaFolha.h"
#include "SistemaGerenciaFolha.cpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string nome;
    int matricula;

    double salario; // ASSALARIADO
    double salarioPorHora, horasTrabalhadas; // HORISTA
    double vendasMensais, percentualComissao; // COMISSIONADO
    double orcamento_maximo; // SISTEMA

    SistemaGerenciaFolha sistema;
    Funcionario *funcionario;

    cin >> orcamento_maximo;
    cin.ignore();
    sistema = SistemaGerenciaFolha(orcamento_maximo);

    getline(cin, nome);
    cin >> matricula >> salario;
    cin.ignore();
    funcionario = new Assalariado(salario, nome, matricula);
    sistema.set_funcionarios(funcionario);

    getline(cin, nome);
    cin >> matricula >> salarioPorHora >> horasTrabalhadas;
    cin.ignore();
    funcionario = new Horista(salarioPorHora, horasTrabalhadas, nome, matricula);
    sistema.set_funcionarios(funcionario);

    getline(cin, nome);
    cin >> matricula >> vendasMensais >> percentualComissao;
    cin.ignore();
    funcionario = new Comissionado(vendasMensais, percentualComissao, nome, matricula);
    sistema.set_funcionarios(funcionario);

    for(int i = 0; i < 3; i++){
        getline(cin, nome);
        if(sistema.consultaSalarioFuncionario(nome) != 0){
            cout << sistema.consultaSalarioFuncionario(nome) << endl;
        } else {
            cout << "FuncionarioNaoExisteException" << endl;
        }
    }

    if(sistema.calcularValorTotalFolha() <= sistema.get_orcamento_maximo()){
        cout << sistema.calcularValorTotalFolha() << endl;
    } else {
        cout << "OrcamentoEstouradoException" << sistema.calcularValorTotalFolha() << endl;
    }
    
    return 0;
}