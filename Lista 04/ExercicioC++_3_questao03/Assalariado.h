#ifndef ASSALARIADO
#define ASSALARIADO

class Assalariado{
protected:
    double salario;
public:
    Assalariado();
    Assalariado(double salario);

    double calcularSalario();

    double get_salario();
    void set_salario(double salario);
};

#endif