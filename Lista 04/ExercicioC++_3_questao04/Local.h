#ifndef LOCAL
#define LOCAL

#include "Insumo.h"

#include <vector>

class Local{
    std::string nome;
    std::string tipo;
    Insumo *InsumorArr = new Insumo[3];
    std::vector <Insumo*> InsumosVec;
public:
    Local();
    Local(std::string nome, std::string tipo);
    ~Local();

    void addInsumoArr(Insumo in, int index);
    void addInsumoVec(Insumo *in);

    std::string get_nome();
    std::string get_tipo();

    void set_nome(std::string nome);
    void set_tipo(std::string tipo);
};

#endif