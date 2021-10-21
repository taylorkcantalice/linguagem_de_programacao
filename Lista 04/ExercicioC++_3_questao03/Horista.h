#ifndef HORISTA
#define HORISTA

class Horista{
protected:
    double salarioPorHora;
    double horasTrabalhadas;
public:
    Horista();
    Horista(double salarioPorHora, double horasTrabalhadas);

    double calcularSalario();

    double get_salarioPorHora();
    double get_horasTrabalhadas();

    void set_salarioPorHora(double salarioPorHora);
    void set_horasTrabalhadas(double horasTrabalhadas);
};

#endif