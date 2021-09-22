/**
 ============================================================================
 Nome      : ExercicioC-1 - questao7.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Data mais antiga
 ============================================================================
**/

#include <stdio.h>
#include <stdlib.h>

#define N_PESSOAS 2

typedef struct {
    int dia;
    int mes;
    int ano;
} tData;

int PessoaMaisVelha(tData pessoa[], int nPessoas){

    if(pessoa[0].ano == pessoa[1].ano){
        if(pessoa[0].mes == pessoa[1].mes){
            if(pessoa[0].dia == pessoa[1].dia){
                return 0;
            } else if(pessoa[0].dia < pessoa[1].dia){
                return 1;
            } else {
                return -1;
            } // If-Else DIA
        } else if(pessoa[0].mes < pessoa[1].mes){
            return 1;
        } else {
            return -1;
        } // If-Else MES
    } else if(pessoa[0].ano < pessoa[1].ano){
        return 1;
    } else {
        return -1;
    } // If-Else ANO
}

int main(void){
    tData pessoa[N_PESSOAS];
    int i;

    for(i = 0; i < N_PESSOAS; i++){
        scanf("%d %d %d", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
    }

    switch(PessoaMaisVelha(pessoa, N_PESSOAS)){
        case -1:
            printf("Pessoa 2 é mais velha\n");
            break;
        case 0:
            printf("Pessoas são da mesma idade\n");
            break;
        case 1:
            printf("Pessoa 1 é mais velha\n");
            break;
    }

    return 0;
}
