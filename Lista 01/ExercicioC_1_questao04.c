/**
 ============================================================================
 Nome      : ExercicioC-1 - questao4.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Funções: soma de matrizes
 ============================================================================
**/

#include <stdio.h>

unsigned int linhas, colunas;

int SomaMatriz (int matriz_A[][colunas], int matriz_B[][colunas], int i, int j){
    return matriz_A[i][j] + matriz_B[i][j];
}

int main(void){
    unsigned int i, j;

    scanf("%u %u", &linhas, &colunas);

    int matriz_A[linhas][colunas], matriz_B[linhas][colunas];
    int matriz_AB[linhas][colunas];

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz_A[i][j]);
        }
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz_B[i][j]);
        }
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz_AB[i][j] = SomaMatriz(matriz_A, matriz_B, i, j);
            if(j < colunas-1){
                printf("%d ", matriz_AB[i][j]);
            } else {
                printf("%d\n", matriz_AB[i][j]);
            }

        }
    }

    return 0;
}
