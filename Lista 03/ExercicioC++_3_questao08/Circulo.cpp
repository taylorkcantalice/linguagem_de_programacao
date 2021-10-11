#include "Circulo.h"

Circulo::Circulo(int tipo) : FiguraGeometrica(tipo){
    nome = "Círculo";
}

float Circulo::calcularArea(){ return PI*raio*raio; };
void Circulo::lerAtributosArea(){ std::cin >> raio; }