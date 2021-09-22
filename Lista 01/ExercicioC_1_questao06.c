/**
 ============================================================================
 Nome      : ExercicioC-1 - questao6.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : ES2020 Est - Veículos
 ============================================================================
**/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char modelo[100];
    char marca[100];
    int anoDeFabricacao;
    double preco;
} tVeiculo;

int main(void){
    tVeiculo carros[2];
    int i;

    for(i = 0; i < 2; i++){
        scanf("%s%*c", carros[i].modelo);
        scanf("%s%*c", carros[i].marca);
        scanf("%d%*c", &carros[i].anoDeFabricacao);
        scanf("%d%*c", &carros[i].preco);
    }

    if(carros[0].anoDeFabricacao == carros[1].anoDeFabricacao){
        if(carros[0].preco > carros[1].preco){
            printf("%s %s\n", carros[0].marca, carros[0].modelo);
        } else {
            printf("%s %s\n", carros[1].marca, carros[1].modelo);
        }
    } else if(carros[0].anoDeFabricacao < carros[1].anoDeFabricacao){
        printf("%s %s\n", carros[0].marca, carros[0].modelo);
    } else {
        printf("%s %s\n", carros[1].marca, carros[1].modelo);
    }

    return 0;
}
