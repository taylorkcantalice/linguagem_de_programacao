/**
 ============================================================================
 Nome      : ExercicioC-1 - questao5.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Menu de opções
 ============================================================================
**/

#include <stdio.h>

void Menu(){
    printf("1 - Item 1\n"
           "2 - Item 2\n"
           "3 - Item 3\n"
           "4 - Sair\n");
}

int main(void){
    int opcao;

    while(1){
        Menu();
        scanf("%d", &opcao);

        if(opcao == 4){
            printf("Sair\n");
            break;
        }

        switch(opcao){
            case 1:
                printf("Item 1\n");
                break;
            case 2:
                printf("Item 2\n");
                break;
            case 3:
                printf("Item 3\n");
                break;
            default:
                printf("Opcao %d Invalida\n", opcao);
        }
    }

    return 0;
}
