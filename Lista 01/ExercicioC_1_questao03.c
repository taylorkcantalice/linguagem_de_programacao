/**
 ============================================================================
 Nome      : ExercicioC-1 - questao3.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Função para informar se matriz é esparsa
 ============================================================================
**/

#include <stdio.h>
#include <stdlib.h>

int TamanhoDoArray(int matriz[], int tamanhoDoArray){
    int i, j;
    double contador_0 = 0;

    for(i = 0; i < tamanhoDoArray; i++){
        if(matriz[i] == 0){
            contador_0++;
        }
    }

    if( (contador_0/tamanhoDoArray) > 0.7 ){
        return 1;
    } else {
        return 0;
    }
}

int main(void){
    int i;
    int linha, coluna;
    int tamanhoDoArray;

    scanf("%d %d", &linha, &coluna);

    tamanhoDoArray = linha*coluna;

    int matriz[tamanhoDoArray];

    for(i = 0; i < tamanhoDoArray; i++){
        scanf("%d", &matriz[i]);
    }

    if(TamanhoDoArray(matriz, tamanhoDoArray)){
        printf("A matriz é esparsa\n");
    } else {
        printf("A matriz não é esparsa\n");
    }

    return 0;
}
