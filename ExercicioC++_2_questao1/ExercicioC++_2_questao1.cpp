/**
 ============================================================================
 Nome      : ExercicioC-2 - questao1.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Empréstimo pode ser concedido?
 ============================================================================
 */

#include <iostream>

using namespace std;

int main(){
    int nPrestacoes;
    double salario_Funcionario, valor_Emprestimo;
    
    while(cin >> salario_Funcionario && salario_Funcionario < 1);
    while(cin >> valor_Emprestimo && valor_Emprestimo < 1);
    while(cin >> nPrestacoes && nPrestacoes < 1);

    if( ((valor_Emprestimo/nPrestacoes)/salario_Funcionario)*100.0 <= 30 ){
        cout << "Emprestimo pode ser concedido" << endl;
    } else {
        cout << "Emprestimo nao pode ser concedido" << endl;
    }
    
    return 0;
}