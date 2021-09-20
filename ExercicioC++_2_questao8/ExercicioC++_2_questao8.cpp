/**
 ============================================================================
 Nome      : ExercicioC++_2_questao8.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Classe Data - 02
 ============================================================================
 */

#include <iostream>

using namespace std;

class Data{
    int dia, mes, ano;

public:
    Data(){
        dia = 1;
        mes = 1;
        ano = 1;
    }
    int get_dia(){
        return dia;
    }
    int get_mes(){
        return mes;
    }
    int get_ano(){
        return ano;
    }
    void set_dia(int valor){
        dia = valor;
    }
    void set_mes(int valor){
        mes = valor;
    }
    void set_ano(int valor){
        ano = valor;
    }
    void printData(){
        cout << get_dia() << " de ";

        switch (get_mes()){
            case 1:
                cout << "Janeiro";
                break;
            case 2:
                cout << "Fevereiro";
                break;
            case 3:
                cout << "Março";
                break;
            case 4:
                cout << "Abril";
                break;
            case 5:
                cout << "Maio";
                break;
            case 6:
                cout << "Junho";
                break;
            case 7:
                cout << "Julho";
                break;
            case 8:
                cout << "Agosto";
                break;
            case 9:
                cout << "Setembro";
                break;
            case 10:
                cout << "Outubro";
                break;
            case 11:
                cout << "Novembro";
                break;
            case 12:
                cout << "Dezembro";
                break;
            default:
                cout << "Indefinido";
                break;
        }

        cout << " de " << get_ano() << endl;
    }
};

int main(){
    int d, m, a;
    Data data;

    cin >> d >> m >> a;  

    data.set_dia(d);
    data.set_mes(m);
    data.set_ano(a);

    data.printData();

    return 0;
}