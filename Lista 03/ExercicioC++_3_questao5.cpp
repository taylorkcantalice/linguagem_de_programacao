/**
 ============================================================================
 Nome      : ExercicioC++_3_questao5.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Trabalhador
 ============================================================================
**/

#include <iostream>
#include <string>

class Trabalhador{
protected:
    std::string nome;
    float salario;
public:
    Trabalhador(){ salario = 0; }
    
    void set_nome(std::string nome){ this->nome = nome; }
    void set_salario(float salario){ this->salario = salario; }

    std::string get_nome(){ return nome; }
    float get_salario(){ return salario; }
};

class TrabalhadorAssalariado : public Trabalhador{
public:
    TrabalhadorAssalariado(){

    }
    TrabalhadorAssalariado(float salario){ this->salario = salario; }
    float calcularPagamentoSemanal(){ return salario/4; }
};

class TrabalhadorPorHora : public Trabalhador{
    float valorDaHora;
public:
    TrabalhadorPorHora(){
        
    }
    TrabalhadorPorHora(float valorDaHora){ this->valorDaHora = valorDaHora; }
    float calcularPagamentoSemanal(int horasSemanais){
        if(horasSemanais > 40){
            salario = (((horasSemanais-40)*1.5)+40) * valorDaHora * 4;
        } else {
            salario = horasSemanais * valorDaHora * 4;
        }
        return  salario/4;
    }
};

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