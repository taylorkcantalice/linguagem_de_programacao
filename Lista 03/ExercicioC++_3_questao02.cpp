/**
 ============================================================================
 Nome      : ExercicioC++_3_questao2.cpp
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : [OO] Agenda telefone e endereço
 ============================================================================
**/

#include <iostream>
#include <string>

class Endereco{
    std::string rua;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string estado;
    std::string CEP;

public:
    Endereco(){
        rua = bairro = cidade = estado = CEP = '0';
        numero = 0;
    }
    Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string CEP){
        this->rua = rua;
        this->numero = numero;
        this->bairro = bairro;
        this->cidade = cidade;
        this->estado = estado;
        this->CEP = CEP;
    }
    std::string toString(){
        return rua + ", " + std::to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + CEP;
    }
};

class Pessoa{
    std::string nome;
    Endereco endereco;
    std::string telefone;
public:
    Pessoa(){ nome = telefone = '0'; }
    Pessoa(std::string nome){ this->nome = nome; };
    Pessoa(std::string nome, Endereco endereco, std::string telefone){
        this->nome = nome;
        this->endereco = endereco;
        this->telefone = telefone;
    }

    std::string toString(){
        return nome + ", " + telefone + "\n" + endereco.toString();
    }
};

int main(){
    int nPessoas;
    int numero;
    std::string nome, telefone, rua, bairro, cidade, estado, cep;
    Endereco endereco;

    std::cin >> nPessoas;
    std::cin.ignore();

    Pessoa pessoas[nPessoas];

    for(int i = 0; i < nPessoas; i++){
        std::getline(std::cin, nome);
        std::getline(std::cin, telefone);
        std::getline(std::cin, rua);
        std::cin >> numero;
        std::cin.ignore();
        std::getline(std::cin, bairro);
        std::getline(std::cin, cidade);
        std::getline(std::cin, estado);
        std::getline(std::cin, cep);

        endereco = Endereco(rua, numero, bairro, cidade, estado, cep);
        pessoas[i] = Pessoa(nome, endereco, telefone);
    }

    for(int i = 0; i < nPessoas; i++){
        std::cout << pessoas[i].toString() << std::endl << std::endl;
    }

    return 0;
}