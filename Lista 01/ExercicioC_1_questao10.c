/**
 ============================================================================
 Nome      : ExercicioC-1 - questao10.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Sistema de votação para uma urna eletrônica - Eleição
 ============================================================================
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int numero;
    int quantidadeDeVotos;
} tCandidato;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    int i, nCandidatos, codigo_Voto;
    int indice, candidato_Vencedor = -1000000;
    double nVotos = 0, nVotos_Nulos;

    scanf("%d", &nCandidatos);

    tCandidato arCandidato[nCandidatos];

    for(i = 0; i < nCandidatos; i++){
        scanf("%d%*c", &arCandidato[i].numero);
        fgets(arCandidato[i].nome, 50, stdin);
        RemoveBarraN(arCandidato[i].nome);
        arCandidato[i].quantidadeDeVotos = 0;
    }

    while(1){
        scanf("%d", &codigo_Voto);

        if(codigo_Voto == -1){
            break;
        }

        nVotos++;

        for(i = 0; i < nCandidatos; i++){
            if(codigo_Voto == arCandidato[i].numero){
                arCandidato[i].quantidadeDeVotos++;
            }
        }
    }

    nVotos_Nulos = nVotos;
    for(i = 0; i < nCandidatos; i++){

        nVotos_Nulos -= arCandidato[i].quantidadeDeVotos;

        if(arCandidato[i].quantidadeDeVotos > candidato_Vencedor){
            candidato_Vencedor = arCandidato[i].quantidadeDeVotos;
            indice = i;
        }
    }

    for(i = 0; i < nCandidatos; i++){
        if(i == indice){
            printf("%.2lf - %d - %s VENCEDOR\n", (arCandidato[indice].quantidadeDeVotos*100)/nVotos, arCandidato[indice].numero, arCandidato[indice].nome);
        } else {
            printf("%.2lf - %d - %s\n", (arCandidato[i].quantidadeDeVotos*100)/nVotos, arCandidato[i].numero, arCandidato[i].nome);
        }
    }

    printf("%.2lf - Nulos\n", (nVotos_Nulos*100)/nVotos);

    return 0;
}
