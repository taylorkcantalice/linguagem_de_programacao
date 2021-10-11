#include "Triangulo.h"

Triangulo::Triangulo(int tipo) : FiguraGeometrica(tipo){
    nome = "Triângulo";
}

float Triangulo::calcularArea(){ return (altura*base)/2; }
void Triangulo::lerAtributosArea(){ std::cin >> altura >> base; };