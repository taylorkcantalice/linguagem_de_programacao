#include <iostream>
#include <string>
#include <vector>

template <typename T >
class Estatisticas{
public:
    int indexOfMaior(std::vector<T> vec){
        T maior = vec[0];
        int index = 0;

        for(int i = 0; i < vec.size(); i++){
            if(maior.getTotal() < vec[i].getTotal()){
                maior = vec[i];
                index = i;
            }
        }

        return index;
    }

    int indexOfMenor(std::vector<T> vec){
        T menor = vec[0];
        int index = 0;

        for(int i = 0; i < vec.size(); i++){
            if(menor.getTotal() > vec[i].getTotal()){
                menor = vec[i];
                index = i;
            }
        }

        return index;
    }

    float media(std::vector<T> vec){
        float soma = vec[0].getTotal();

        for(int i = 1; i < vec.size(); i++){
            soma += vec[i].getTotal();
        }
        
        return soma/vec.size();
    }
};

class Pedido{
    float valorUnitario;
    int quantidade;
public:
    Pedido(){
        valorUnitario = quantidade = 0;
    }
    Pedido(float valor, int quant){
        this->valorUnitario = valor;
        this->quantidade = quant;
    }

    float getTotal(){ return valorUnitario*quantidade; }
    void toString(){ 
        std::cout.precision(5);
        std::cout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal() << std::endl; 
    }
    //std::string toString(){ return "R$ " + std::to_string(valorUnitario) + ", quant: " + std::to_string(quantidade) + ", total: R$ " + std::to_string(getTotal()); }

    void set_valorUnitario(int valorUnitario){ this->valorUnitario = valorUnitario; }
    void set_quantidade(int quantidade){ this->quantidade = quantidade; }
};

class Livro{
    std::string titulo;
    int totalPaginas;
public:
    Livro(){
        titulo = "";
        totalPaginas = 0;
    }
    Livro(std::string titulo, int quant){
        this->titulo = titulo;
        this->totalPaginas = quant;
    }

    int getTotal(){ return totalPaginas; }
    //void toString(){ std::cout << titulo << ", paginas: " << totalPaginas << std::endl; }
    std::string toString(){ return titulo + ", páginas: " + std::to_string(totalPaginas); }

    void set_titulo(std::string titulo){ this->titulo = titulo; }
    void set_totalPaginas(int totalPaginas){ this->totalPaginas = totalPaginas; }
};

int main(){
    int N_Pedidos, N_Livros;
    int index;

    Estatisticas<Pedido> estatistico_pedido;
    Estatisticas<Livro> estatistico_livro;

    std::vector<Pedido> pedido;
    float valorUnitario;
    int quantidade;

    std::vector<Livro> livro;
    std::string titulo;
    int totalPaginas;

    std::cin >> N_Pedidos;
    std::cin.ignore();
    for(int i = 0; i < N_Pedidos; i++){
        std::cin >> valorUnitario >> quantidade;
        std::cin.ignore();

        pedido.push_back(Pedido(valorUnitario, quantidade));
    }

    std::cin >> N_Livros;
    std::cin.ignore();
    for(int i = 0; i < N_Livros; i++){
        std::getline(std::cin, titulo);
        std::cin >> totalPaginas;
        std::cin.ignore();

        livro.push_back(Livro(titulo, totalPaginas));
    }

    index = estatistico_pedido.indexOfMaior(pedido);
    std::cout << "Maior: " ;
    pedido[index].toString();
    index = estatistico_pedido.indexOfMenor(pedido);
    std::cout << "Menor: ";
    pedido[index].toString();
    std::cout << "Média: " << estatistico_pedido.media(pedido) << std::endl;

    index = estatistico_livro.indexOfMaior(livro);
    std::cout << "Maior: " << livro[index].toString() << std::endl;
    index = estatistico_livro.indexOfMenor(livro);
    std::cout << "Menor: " << livro[index].toString() << std::endl;
    std::cout << "Média: " << estatistico_livro.media(livro) << std::endl;

    return 0;
}