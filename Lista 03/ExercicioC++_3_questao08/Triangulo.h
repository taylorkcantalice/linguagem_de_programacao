#ifndef TRIANGULO
#define TRIANGULO

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
    float altura;
    float base;
public:
    Triangulo(int tipo);

    float calcularArea();
    void lerAtributosArea();
};

#endif