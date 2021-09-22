/**
 ============================================================================
 Nome      : ExercicioC-1 - questao9.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : ES2020 Relatório 2
 ============================================================================
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char descricao[50];
    float peso;
    char tipo;
} tMovel;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    int i, nMoveis;
    int contador = 0, indice = 0, movelPesado = -100000;

    scanf("%d%*c", &nMoveis);

    tMovel ar_Movel[nMoveis];

    for(i = 0; i < nMoveis; i++){
        fgets(ar_Movel[i].descricao, 50, stdin);
        RemoveBarraN(ar_Movel[i].descricao);
        scanf("%f%*c", &ar_Movel[i].peso);
        scanf("%c%*c", &ar_Movel[i].tipo);
    }

    contador = 0;
    for(i = 0; i < nMoveis; i++){
        if(ar_Movel[i].tipo == 's' && ar_Movel[i].peso > 10){
            contador++;
        }
    }
    printf("Tipo 's' acima de 10Kg: %d\n", contador);

    contador = 0;
    for(i = 0; i < nMoveis; i++){
        if(strstr(ar_Movel[i].descricao, "Real") && strrchr(ar_Movel[i].descricao, 'R')){
            contador++;
        }
    }
    printf("Termina em  \"Real\": %d\n", contador);

    for(i = 0; i < nMoveis; i++){
        if(ar_Movel[i].peso > movelPesado){
            movelPesado = ar_Movel[i].peso;
            indice = i;
        }
    }
    printf("Mais pesado: \"%s\"\n", ar_Movel[indice].descricao);

    return 0;
}
