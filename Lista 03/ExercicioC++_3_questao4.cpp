/**
 ============================================================================
 Nome      : ExercicioC++_3_questao4.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Figuras Geométricas 1
 ============================================================================
**/

#include <iostream>
#include <string>

#define PI 3.14

class FiguraGeometrica{
protected:
    std::string nome;
    int tipo;
public:
    FiguraGeometrica(int tipo){ this->tipo = tipo; }
    float calcularArea();
    void lerAtributosArea();
    std::string getNome(){ return nome; };
};

class Quadrado : public FiguraGeometrica{
    float lado;
public:
    Quadrado(int tipo) : FiguraGeometrica(tipo){
        nome = "Quadrado";
    }

    float calcularArea(){ return lado*lado; };
    void lerAtributosArea(){ std::cin >> lado; }
};

class Retangulo : public FiguraGeometrica{
    float altura;
    float comprimento;
public:
    Retangulo(int tipo) : FiguraGeometrica(tipo){
        nome = "Retângulo";
    }

    float calcularArea(){ return altura*comprimento; };
    void lerAtributosArea(){ std::cin >> altura >> comprimento; }
};

class Triangulo : public FiguraGeometrica{
    float altura;
    float base;
public:
    Triangulo(int tipo) : FiguraGeometrica(tipo){
        nome = "Triângulo";
    }

    float calcularArea(){ return (altura*base)/2; }
    void lerAtributosArea(){ std::cin >> altura >> base; };
};

class Circulo : public FiguraGeometrica{
    float raio;
public:
    Circulo(int tipo) : FiguraGeometrica(tipo){
        nome = "Círculo";
    }

    float calcularArea(){ return PI*raio*raio; };
    void lerAtributosArea(){ std::cin >> raio; }
};

int main(){
    int opcao;
    Quadrado quadrado(1);
    Retangulo retangulo(2);
    Triangulo triangulo(3);
    Circulo circulo(4);

    while(1){
        std::cin >> opcao;

        if(opcao == 0){
            break;
        }

        switch(opcao){
            case 1:
                quadrado.lerAtributosArea();
                std::cout << quadrado.getNome() << " de área " << quadrado.calcularArea() << std::endl;
                break;
            case 2:
                retangulo.lerAtributosArea();
                std::cout << retangulo.getNome() << " de área " << retangulo.calcularArea() << std::endl;
                break;
            case 3:
                triangulo.lerAtributosArea();
                std::cout << triangulo.getNome() << " de área " << triangulo.calcularArea() << std::endl;
                break;
            case 4:
                circulo.lerAtributosArea();
                std::cout << circulo.getNome() << " de área " << circulo.calcularArea() << std::endl;
                break;
        }
    }

    return 0;
}