/**
 ============================================================================
 Nome      : ExercicioC++_3_questao8.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Figuras Geométricas 2 - Polimorfismo
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
    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
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
    FiguraGeometrica *figura;
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
                figura = &quadrado;
                figura->lerAtributosArea();
                std::cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << std::endl;
                break;
            case 2:
                figura = &retangulo;
                figura->lerAtributosArea();
                std::cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << std::endl;
                break;
            case 3:
                figura = &triangulo;
                figura->lerAtributosArea();
                std::cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << std::endl;
                break;
            case 4:
                figura = &circulo;
                figura->lerAtributosArea();
                std::cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << std::endl;
                break;
        }
    }

    return 0;
}