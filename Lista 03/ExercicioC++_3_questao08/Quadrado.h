#ifndef QUADRADO
#define QUADRADO

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{
    float lado;
public:
    Quadrado(int tipo);
    float calcularArea();
    void lerAtributosArea();
};

#endif