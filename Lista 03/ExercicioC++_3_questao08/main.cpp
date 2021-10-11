#include <iostream>
#include <string>

#include "FiguraGeometrica.h"
#include "FiguraGeometrica.cpp"
#include "Quadrado.h"
#include "Quadrado.cpp"
#include "Retangulo.h"
#include "Retangulo.cpp"
#include "Triangulo.h"
#include "Triangulo.cpp"
#include "Circulo.h"
#include "Circulo.cpp"

using namespace std;

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