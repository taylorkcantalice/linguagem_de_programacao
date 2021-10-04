#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

class Trabalhador{
protected:
    std::string nome;
    float salario;
public:
    Trabalhador();
    
    void set_nome(std::string nome);
    void set_salario(float salario);

    std::string get_nome();
    float get_salario();
};

#endif