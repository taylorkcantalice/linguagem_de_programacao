/**
 ============================================================================
 Nome      : ExercicioC++_3_questao3.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Restaurante
 ============================================================================
**/

#include <iostream>
#include <string>

#define TAM 10

class Pedido{
    int numero;
    std::string descricao;
    int quantidadeComprada;
    float preco;

public:
    Pedido(){
        numero = 0;
        descricao = 'vazio';
        quantidadeComprada = 0;
        preco = 0;
    }
    Pedido(int numero, std::string descricao, int quantidadeComprada, float preco){
        this->numero = numero;
        this->descricao = descricao;
        this->quantidadeComprada = quantidadeComprada;
        this->preco = preco;
    }

    float getTotal(){ return quantidadeComprada*preco; }

    void set_numero(int numero){ this->numero = numero; }
    void set_descricao(std::string descricao){ this->descricao = descricao; }
    void set_quantidadeComprada(int quantidadeComprada){ this->quantidadeComprada = quantidadeComprada; }
    void set_preco(float preco){ this->preco = preco; }

    int get_numero(){ return numero; }
    std::string get_descricao(){ return descricao; }
    int get_quantidadeComprada(){ return quantidadeComprada; }
    float get_preco(){ return preco; }
};

class MesaDeRestaurante{
    Pedido *pedidos = new Pedido[TAM];
    int quantidadeDePedidos;

public:
    MesaDeRestaurante(){ quantidadeDePedidos = 0; }
    void adicionarPedido(Pedido p){
        for(int i = 0; i < TAM; i++){
            if(pedidos[i].get_numero() == 0){
                pedidos[i] = p;
                quantidadeDePedidos++;
                break;
            }else if(pedidos[i].get_descricao() == p.get_descricao()){
                pedidos[i].set_quantidadeComprada(pedidos[i].get_quantidadeComprada() + p.get_quantidadeComprada());
                break;
            }            
        }
    }
    void zeraPedidos(){
        for(int i = 0; i < TAM; i++){
            pedidos[i].set_quantidadeComprada(0);
        }
    }
    float calculaTotal(){
        float total = 0;
        for(int i = 0; i < TAM; i++){
            total += pedidos[i].getTotal();
        }
        return total;
    }
    void exibeConta(){
        for(int i = 0; i < quantidadeDePedidos; i++){
            std::cout << pedidos[i].get_numero() << " - " << pedidos[i].get_descricao() << " - " <<
                         pedidos[i].get_quantidadeComprada() << " - " << pedidos[i].get_preco() << 
                         " - R$ " << pedidos[i].getTotal() << std::endl;                    
        }
        std::cout << "Total: R$ " << calculaTotal() << std::endl << std::endl;   
    }
};

class Restaurante{
    MesaDeRestaurante *mesas = new MesaDeRestaurante[TAM];

public:
    void adicionarPedido(Pedido p, int mesa){ mesas[mesa].adicionarPedido(p); }
    float calculaTotalRestaurante(){
        float total = 0;
        for(int i = 0; i < TAM; i++){
            total += mesas[i].calculaTotal();
        }
        return total;
    }
    MesaDeRestaurante getMesa(int mesa){ return mesas[mesa]; }
};

int main(){
    int numero, quantidadeComprada, mesa;
    std::string descricao;
    float preco;
    Pedido pedido;
    Restaurante restaurantes;

    while(1){
        std::cin >> numero;
        if(numero == -1){
            break;
        }
        std::cin.ignore();
        std::getline(std::cin, descricao);
        std::cin >> quantidadeComprada;
        std::cin >> preco;
        std::cin >> mesa;

        pedido = Pedido(numero, descricao, quantidadeComprada, preco);

        restaurantes.adicionarPedido(pedido, mesa);
    }

    for(int i = 0; i < TAM; i++){
        if(restaurantes.getMesa(i).calculaTotal() != 0){
            std::cout << "Mesa " << i << std::endl;
            restaurantes.getMesa(i).exibeConta();
        }
    }
    std::cout << "Total Restaurante: R$ " << restaurantes.calculaTotalRestaurante() << std::endl;
}