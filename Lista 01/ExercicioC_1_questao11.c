/**
 ============================================================================
 Nome      : ExercicioC-1 - questao11.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Entrada e saída com arquivos CSV
 ============================================================================
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CADASTRO 100

int num_Cadastros_Global = 0;

typedef struct{
    int CPF;
    char nome[50];
    char sobrenome[50];
    char endereco[50];
    char telefone[50];
} tCadastro;

tCadastro cadastro_Global[MAX_CADASTRO];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void CarregarDados(){
    FILE *fp;
    char str[101];

    fp = fopen("arquivo.csv", "r");
    if (fp == NULL){
        printf("Erro ao carregar o arquivo csv.\n");
        return;
    }

    while(1){
        /* CPF */
        fscanf(fp, "%d%*c", &cadastro_Global[num_Cadastros_Global].CPF, fp);
        if(feof(fp)){
            break;
        }
        /* NOME */
        fgets(str, 101, fp);
        RemoveBarraN(str);
        strcpy(cadastro_Global[num_Cadastros_Global].nome, str);
        /* SOBRENOME */
        fgets(str, 101, fp);
        RemoveBarraN(str);
        strcpy(cadastro_Global[num_Cadastros_Global].sobrenome, str);
        /* ENDEREÇO */
        fgets(str, 101, fp);
        RemoveBarraN(str);
        strcpy(cadastro_Global[num_Cadastros_Global].endereco, str);
        /* TELEFONE */
        fgets(str, 101, fp);
        RemoveBarraN(str);
        strcpy(cadastro_Global[num_Cadastros_Global].telefone, str);

        num_Cadastros_Global++;
    }

    if (fclose(fp) == 0){
        //printf("Dados carregados com sucesso\n");
    }
}

void SalvarDados(const tCadastro ar_Pessoas[], const int nCadastros){
    int i;
    FILE *fp;

    fp = fopen("arquivo.csv", "w");
    if (fp == NULL){
        printf("Erro ao salvar o arquivo csv.\n");
        return;
    }

    for (i = 0; i < nCadastros; i++){
        fprintf(fp, "%d\n%s\n%s\n%s\n%s\n", ar_Pessoas[i].CPF, ar_Pessoas[i].nome, ar_Pessoas[i].sobrenome,
                ar_Pessoas[i].endereco, ar_Pessoas[i].telefone);
    }

    if (fclose(fp) == 0){
        //printf("Dados salvos com sucesso\n");
    }
}

int main(void){
    int i, nCadastros;

    scanf("%d", &nCadastros);

    tCadastro ar_Pessoas[nCadastros];

    for(i = 0; i < nCadastros; i++){
        /* CPF */
        scanf("%d%*c", &ar_Pessoas[i].CPF);
        /* NOME */
        fgets(ar_Pessoas[i].nome, 50, stdin);
        RemoveBarraN(ar_Pessoas[i].nome);
        /* SOBRENOME */
        fgets(ar_Pessoas[i].sobrenome, 50, stdin);
        RemoveBarraN(ar_Pessoas[i].sobrenome);
        /* ENDEREÇO */
        fgets(ar_Pessoas[i].endereco, 50, stdin);
        RemoveBarraN(ar_Pessoas[i].endereco);
        /* TELEFONE */
        fgets(ar_Pessoas[i].telefone, 50, stdin);
        RemoveBarraN(ar_Pessoas[i].telefone);
    }

    SalvarDados(ar_Pessoas, nCadastros);

    CarregarDados();

    printf("CPF,nome,snome,endereço,telefone\n");
    for(i = 0; i < num_Cadastros_Global; i++){
        printf("%d,%s,%s,%s,%s\n", cadastro_Global[i].CPF, cadastro_Global[i].nome, cadastro_Global[i].sobrenome,
               cadastro_Global[i].endereco, cadastro_Global[i].telefone);
    }

    return 0;
}
