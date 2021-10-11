#ifndef RETANGULO
#define RETANGULO

#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica{
    float altura;
    float comprimento;
public:
    Retangulo(int tipo);

    float calcularArea();
    void lerAtributosArea();
};

#endif