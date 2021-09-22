/**
 ============================================================================
 Nome      : ExercicioC-1 - questao1.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Distância entre dois pontos
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} tPosicao;

float Distancia(tPosicao p, tPosicao n){
    return sqrt( (n.x - p.x)*(n.x - p.x) + (n.y - p.y)*(n.y - p.y) );
}

int main(void){
    tPosicao ponto_P;
    int i, nPontos, indice_PN;;
    float distancia_PN, menor_distancia_PN = 99999999;

    scanf("%d %d", &ponto_P.x, &ponto_P.y);

    scanf("%d", &nPontos);

    tPosicao ponto_N[nPontos];
    for(i = 0; i < nPontos; i++){
        scanf("%d %d", &ponto_N[i].x, &ponto_N[i].y);

        distancia_PN = Distancia(ponto_P, ponto_N[i]);
        if(distancia_PN < menor_distancia_PN){
            menor_distancia_PN = distancia_PN;
            indice_PN = i;
        }
    }

    printf("Ponto mais perto e (%d, %d)\n", ponto_N[indice_PN].x, ponto_N[indice_PN].y);

    return 0;
}
