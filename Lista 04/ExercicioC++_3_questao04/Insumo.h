#ifndef INSUMO
#define INSUMO

#include <iostream>
#include <string>

class Insumo{
protected:
    std::string nome;
    int quantidade;
    int valorUnitario;
    std::string dtVencimento;
    std::string dtAdquirida;
    std::string nomeFabricante;
public:
    Insumo();
    Insumo(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, 
            std::string dtAdquirida, std::string nomeFabricante);
    ~Insumo();

    std::string get_Nome();
    int get_Quantidade();
    int get_valorUnitario();
    std::string get_dtVencimento();
    std::string get_dtAdquirida();
    std::string get_nomeFabricante();
    
    void set_Nome(std::string nome);
    void set_Quantidade(int quantidade);
    void set_valorUnitario(int valorUnitario);
    void set_dtVencimento(std::string dtVencimento);
    void set_dtAdquirida(std::string dtAdquirida);
    void set_nomeFabricante(std::string nomeFabricante);
};

#endif