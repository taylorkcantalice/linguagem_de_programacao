/**
 ============================================================================
 Nome      : ExercicioC++_2_questao12.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Data - 03 - Avançar Dia
 ============================================================================
 */

#include <iostream>

class Data{
    int dia, mes, ano;

public:
    int getDaysMonth(int valor_mes){
        if(valor_mes == 1 || valor_mes == 3 || valor_mes == 5 || valor_mes == 7 ||
            valor_mes == 8 || valor_mes == 10 || valor_mes == 12){
            return 31;
        } else if(valor_mes == 2){
            return 28;
        } else if(valor_mes == 4 || valor_mes == 6 || valor_mes == 9 || valor_mes == 11){
            return 30;
        }
    }

    Data(int valor_dia, int valor_mes, int valor_ano){
        if(valor_dia > 0 && valor_dia <= getDaysMonth(valor_mes)){
            dia = valor_dia;
        } else {
            std::cout << "Atributo dia Inválido" << std::endl;
            dia = 1;
        }

        if(valor_mes > 0 && valor_mes < 13){
            mes = valor_mes;
        } else {
            std::cout << "Atributo mês Inválido" << std::endl;
            mes = 1;
        }

        if(valor_ano > 0){
            ano = valor_ano;
        } else {
            std::cout << "Atributo ano Inválido" << std::endl;
            ano = 1;
        }
    }

    int get_dia(){ return dia; }
    int get_mes(){ return mes; }
    int get_ano(){ return ano; }

    void set_dia(int valor){ dia = valor; }
    void set_mes(int valor){ mes = valor; }
    void set_ano(int valor){ ano = valor; }

    void avancarDia(){
        dia++;

        if(dia > getDaysMonth(mes)){
            mes++;
            dia = 1;
        }
        if(mes > 12){
            ano++;
            mes = 1;
        }
    }
};

int main(){
    int d, m, a;
    int add_dias;

    std::cin >> d >> m >> a >> add_dias;

    Data data(d, m, a);

    for(int i = 0; i < add_dias; i++){
        data.avancarDia();
    }

    if(data.get_dia() < 10){
        std::cout << '0' << data.get_dia();
    } else {
        std::cout << data.get_dia();
    }

    if(data.get_mes() < 10){
        std::cout << "/" << '0' << data.get_mes();
    } else {
        std::cout << "/" << data.get_mes();
    }

    std::cout << "/" << data.get_ano() << std::endl;

    return 0;   
}