#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){
    int nTrabalhadores, tipoDoTrabalhador, horasSemanais;
    float salario, valorDaHora;
    std::string nome;
    TrabalhadorAssalariado assalariado;
    TrabalhadorPorHora por_hora;

    std::cin >> nTrabalhadores;

    while(nTrabalhadores--){
        std::cin >> tipoDoTrabalhador;
        std::cin.ignore();
        std::getline(std::cin, nome);

        switch(tipoDoTrabalhador){
            case 1:
                std::cin >> salario;

                assalariado.set_nome(nome);
                assalariado.set_salario(salario);

                std::cout << assalariado.get_nome() << " - Semanal: R$ " << assalariado.calcularPagamentoSemanal() << 
                             " - Mensal: R$ " << assalariado.get_salario() << std::endl;
                break;
            case 2:
                std::cin >> valorDaHora >> horasSemanais;

                por_hora = TrabalhadorPorHora(valorDaHora);
                por_hora.set_nome(nome);

                std::cout << por_hora.get_nome() << " - Semanal: R$ " << por_hora.calcularPagamentoSemanal(horasSemanais);
                std::cout << " - Mensal: R$ " << por_hora.get_salario() << std::endl;
                break;
        }
    }

    return 0;
}