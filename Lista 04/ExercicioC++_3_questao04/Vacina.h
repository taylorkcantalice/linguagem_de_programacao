#ifndef VACINA
#define VACINA

#include "Insumo.h"

class Vacina : public Insumo{
    std::string tipo;
    int quantDoses;
    int intervalo;
public: 
    Vacina();
    Vacina(std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string dtAdquirida, 
            std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo);
    ~Vacina();

    std::string get_tipo();
    int get_quantDoses();
    int get_intervalo();

    void set_tipo(std::string tipo);
    void set_quantDoses(int quantDoses);
    void set_intervalo(int intervalo);    
};

#endif