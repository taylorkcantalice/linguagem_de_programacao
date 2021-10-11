#ifndef FIGURAGEOMETRICA
#define FIGURAGEOMETRICA

#include <iostream>
#include <string>

class FiguraGeometrica{
protected:
    std::string nome;
    int tipo;
public:
    FiguraGeometrica(int tipo);
    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
    std::string getNome();
};

#endif