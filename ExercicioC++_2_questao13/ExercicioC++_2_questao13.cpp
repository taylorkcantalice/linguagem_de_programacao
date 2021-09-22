/**
 ============================================================================
 Nome      : ExercicioC++_2_questao13.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Sistema de Controle de Gastos
 ============================================================================
 */

#include <iostream>
#include <string>

class Despesa{
    std::string nome;
    float valor;
    std::string tipoDeGasto;

public:
    Despesa(){
        valor = 0;
    }

    std::string get_nome(){ return nome; }
    float get_valor(){ return valor; }
    std::string get_tidoDeGasto(){ return tipoDeGasto; }

    void set_nome(std::string descricao){ nome = descricao; }
    void set_valor(float valor_despesa){ valor = valor_despesa; }
    void set_tipoDeGasto(std::string descricao){ tipoDeGasto = descricao; }
};

class ControleDeGasto{
    Despesa despesa[100];

public:
    void setDespesa(Despesa d, int pos){ despesa[pos] = d; }

    Despesa getDespesa(int pos){ return despesa[pos]; }

    float calculaTotalDeDespesas(){
        float total = 0;

        for(int i = 0; i < 100; i++){
            total += despesa[i].get_valor();
        }

        return total;
    }

    float calculaTotalDeDespesas(std::string tipo){
        float total = 0;

        for(int i = 0; i < 100; i++){
            if(tipo == despesa[i].get_tidoDeGasto()){
                total += despesa[i].get_valor();
            }
        }

        return total;
    }

    bool existeDespesaDoTipo(std::string tipo){
        for(int i = 0; i < 100; i++){
            if(tipo == despesa[i].get_tidoDeGasto()){
                return true;
            }
        }

        return false;
    }
};

int main(){
    int N;
    float valor;
    std::string nome, tipoDeGasto, pesquisa;
    Despesa despesas;
    ControleDeGasto controle_de_gasto;

    std::cin >> N;
    std::cin.ignore();

    for(int i = 0; i < N; i++){
        std::getline(std::cin, nome);
        std::cin >> valor;
        std::cin.ignore();
        std::getline(std::cin, tipoDeGasto);

        despesas.set_nome(nome);
        despesas.set_valor(valor);
        despesas.set_tipoDeGasto(tipoDeGasto);

        controle_de_gasto.setDespesa(despesas, i);
    }

    std::getline(std::cin, pesquisa);
    std::cout.precision(3);
    if(controle_de_gasto.existeDespesaDoTipo(pesquisa)){
        for(int i = 0; i < N; i++){
            if(controle_de_gasto.getDespesa(i).get_tidoDeGasto() == pesquisa){
                std::cout << controle_de_gasto.getDespesa(i).get_nome() << ", R$ " << controle_de_gasto.getDespesa(i).get_valor() << std::endl;
            }
        }
    } else {
        std::cout << "Nenhuma despesa do tipo especificado" << std::endl;
    }

    std::cout << "Total: " << controle_de_gasto.calculaTotalDeDespesas(pesquisa) << "/" << controle_de_gasto.calculaTotalDeDespesas();

    return 0;
}