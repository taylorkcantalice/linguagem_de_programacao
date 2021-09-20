/**
 ============================================================================
 Nome      : ExercicioC++_2_questao3.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Sistema Inteligente - Identificação de Aves - Vídeo
 ============================================================================
 */

#include <iostream>

using namespace std;

struct tAnimal{
    string passaro;
    int identidade[5];
};

int main(){
    tAnimal animais[10] {
        {"coruja", {0,1,0,1,1}},
        {"pardal", {0,0,0,1,0}},
        {"galinha", {0,0,1,1,0}},
        {"ema", {0,1,0,0,0}},
        {"falcão", {0,1,0,1,0}},
        {"pato", {1,0,0,1,0}},
        {"pinguim", {1,1,0,0,0}},
        {"gaivota", {1,1,0,1,0}},
        {"garça", {1,1,0,1,1}},
        {"avestruz", {0,0,0,0,0}}
    };
    
    int Aquatica, Predadora, Domestica, CapazDeVoar, Noturna;
    cin >> Aquatica >> Predadora >> Domestica >> CapazDeVoar >> Noturna;

    for(int i = 0; i < 10; i++){
        if(animais[i].identidade[0] == Aquatica && animais[i].identidade[1] == Predadora &&
            animais[i].identidade[2] == Domestica && animais[i].identidade[3] == CapazDeVoar &&
            animais[i].identidade[4] == Noturna){
                cout << animais[i].passaro << endl;
            }
    }

    return 0;
}