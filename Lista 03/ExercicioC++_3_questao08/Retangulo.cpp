#include "Retangulo.h"

Retangulo::Retangulo(int tipo) : FiguraGeometrica(tipo){
    nome = "Retângulo";
}

float Retangulo::calcularArea(){ return altura*comprimento; };
void Retangulo::lerAtributosArea(){ std::cin >> altura >> comprimento; }