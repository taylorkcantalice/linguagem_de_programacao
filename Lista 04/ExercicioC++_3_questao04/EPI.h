#ifndef EPI_h
#define EPI_h

#include "Insumo.h"

class EPI : public Insumo{
    std::string tipo;
    std::string descricao;
public: 
    EPI();
    EPI(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string dtAdquirida,
        std::string nomeFabricante, std::string tipo, std::string descricao);
    ~EPI();

    std::string get_tipo();
    std::string get_descricao();

    void set_tipo(std::string tipo);
    void set_descricao(std::string descricao);
};

#endif