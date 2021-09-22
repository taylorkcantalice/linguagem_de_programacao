/**
 ============================================================================
 Nome      : ExercicioC-1 - questao2.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Distância entre dois pontos
 ============================================================================
**/

#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} tPosicao;

double Distancia(tPosicao a, tPosicao b){
    return sqrt( (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y) );
}

int main(void){
    tPosicao ponto_A, ponto_B;
    int distancia;

    scanf("%d %d", &ponto_A.x, &ponto_A.y);
    scanf("%d %d", &ponto_B.x, &ponto_B.y);

    distancia = floor(Distancia(ponto_A, ponto_B)*Distancia(ponto_A, ponto_B));
    printf("%d\n", distancia);

    return 0;
}
