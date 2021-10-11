#ifndef CIRCULO
#define CIRCULO

#include "FiguraGeometrica.h"

#define PI 3.14

class Circulo : public FiguraGeometrica{
    float raio;
public:
    Circulo(int tipo);

    float calcularArea();
    void lerAtributosArea();
};

#endif