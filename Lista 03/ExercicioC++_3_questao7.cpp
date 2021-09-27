/**
 ============================================================================
 Nome      : ExercicioC++_3_questao7.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Imobiliária
 ============================================================================
**/

#include <iostream>
#include <string>

class Imovel{
protected:
    std::string nome;
    float valor;
    std::string disponivel;
public:
    Imovel(){ valor = 0;}

    void setNome(std::string nome){ this->nome = nome; }
    void setValor(float valor){ this->valor = valor; }
    void setDisponivel(std::string disponivel){ this->disponivel = disponivel; }

    std::string getNome(){ return nome; }
    float getValor(){ return valor; }
    std::string getDisponivel(){ return disponivel; }
};

class Casa : public Imovel{
    int pavimentos;
    int quartos;
    float areaTerreno;
    float areaConstruida;
public:
    Casa() : Imovel(){ nome = "Casa"; }
    void exibeAtributos(){
        std::cout << nome << " para " << disponivel << ". " << pavimentos << " pavimentos, " <<
                     quartos << " quartos, " << areaTerreno << "m2 de área de terreno e " <<
                     areaConstruida << "m2 de área construída. R$ " << valor << "." << std::endl;
    }
    void lerAtributos(){
        std::cin >> valor;
        std::cin.ignore();
        std::getline(std::cin, disponivel);
        std::cin >> pavimentos >> quartos >> areaTerreno >> areaConstruida;
    }
};

class Apartamento : public Imovel{
    float area;
    int quartos;
    int andar;
    float condominio;
    int garagens;
public:
    Apartamento() : Imovel(){ nome = "Apartamento"; }
    void exibeAtributos(){
        std::cout << nome << " para " << disponivel << ". " << area << "m2 de área, " <<
                     quartos << " quartos, " << andar << " andar(es), " << condominio <<
                     " de condomínio, " << garagens << " vaga(s) de garagem. R$ " <<
                     valor << "." << std::endl;
    }
    void lerAtributos(){
        std::cin >> valor;
        std::cin.ignore();
        std::getline(std::cin, disponivel);
        std::cin >> area >> quartos >> andar >> condominio >> garagens;
    }
};

class Terreno : public Imovel{
    float area;
public:
    Terreno() : Imovel(){ nome = "Terreno"; }
    void exibeAtributos(){
        std::cout << nome << " para " << disponivel << ". " << area << "m2 de área de terreno. R$ " << 
                     valor << "." << std::endl;
    }
    void lerAtributos(){
        std::cin >> valor;
        std::cin.ignore();
        std::getline(std::cin, disponivel);
        std::cin >> area;
    }
};

int main(){
    int nImoveis, opcaoImovel;
    Casa casa;
    Apartamento apartamento;
    Terreno terreno;

    std::cin >> nImoveis;

    while(nImoveis--){
        std::cin >> opcaoImovel;

        switch(opcaoImovel){
            case 1:
                casa.lerAtributos();
                casa.exibeAtributos();
                break;
            case 2:
                apartamento.lerAtributos();
                apartamento.exibeAtributos();
                break;
            case 3:
                terreno.lerAtributos();
                terreno.exibeAtributos();
                break;
        }
    }
}