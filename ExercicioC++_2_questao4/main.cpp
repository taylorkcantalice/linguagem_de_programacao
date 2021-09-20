/**
 ============================================================================
 Nome      : ExercicioC++_2_questao4.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Data - 01
 ============================================================================
 */

#include <iostream>
#include "Data.h"

using namespace std;

int main(){    
    Data d1;

    cin >> d1.dia;
    cin >> d1.mes;
    cin >> d1.ano;

    cout << d1.dia << "/" << d1.mes << "/" << d1.ano << endl;
}