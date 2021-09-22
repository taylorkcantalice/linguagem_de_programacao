/**
 ============================================================================
 Nome      : ExercicioC-1 - questao8.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : ES2020 Est - Jogadores
 ============================================================================
**/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int idade;
    double chutes_a_gols;
    double gols;
} tJogador;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    tJogador jogador[2];
    int i;

    for(i = 0; i < 2; i++){
        fgets(jogador[i].nome, 100, stdin);
        RemoveBarraN(jogador[i].nome);
        scanf("%d %lf %lf%*c", &jogador[i].idade, &jogador[i].chutes_a_gols, &jogador[i].gols);
    }

    if( (jogador[0].gols/jogador[0].chutes_a_gols) > (jogador[1].gols/jogador[1].chutes_a_gols)){
        printf("%s (%d)\n", jogador[0].nome, jogador[0].idade);
    } else {
        printf("%s (%d)\n", jogador[1].nome, jogador[1].idade);
    }

    return 0;
}
