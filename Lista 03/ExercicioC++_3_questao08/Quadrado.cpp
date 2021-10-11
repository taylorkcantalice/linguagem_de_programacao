#include "Quadrado.h"

Quadrado::Quadrado(int tipo) : FiguraGeometrica(tipo){
    nome = "Quadrado";
}

float Quadrado::calcularArea(){ return lado*lado; }
void Quadrado::lerAtributosArea(){ std::cin >> lado; }