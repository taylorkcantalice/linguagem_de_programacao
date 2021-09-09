/**
 ============================================================================
 Nome      : ExercicioC-2 - questao2.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Retirar repetidos
 ============================================================================
 */

#include <iostream>

using namespace std;

int main(){
    int N;

    cin >> N;

    int vetor[N] = {0};

    for(int i = 0; i < N; i++){
        while(cin >> vetor[i] && vetor[i] < 0);
    }

    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(vetor[i] == vetor[j]){
                vetor[j] = 0;
            }
        }
    }

    for(int i = 0; i < N; i++){
        if(vetor[i] != 0){
            cout << vetor[i] << " ";
        }
    }
    cout << endl;

    return 0;
}