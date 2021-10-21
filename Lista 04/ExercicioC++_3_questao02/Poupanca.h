#ifndef POUPANCA
#define POUPANCA

#include <iostream>

class Poupanca{
protected:
    int variacao;
    double taxaRendimento;
public:
    Poupanca();
    Poupanca(int variacao, double taxaRendimento);

    double render();

    int get_variacao();
    double get_taxaRendimento();

    void set_variacao(int variacao);
    void set_taxaRendimento(double taxaRendimento);
};

#endif