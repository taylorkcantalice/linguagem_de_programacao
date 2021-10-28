#include "Insumo.h"
#include "Insumo.cpp"
#include "Vacina.h"
#include "Vacina.cpp"
#include "Medicamento.h"
#include "Medicamento.cpp"
#include "EPI.h"
#include "EPI.cpp"
#include "Local.h"
#include "Local.cpp"

#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    int quantidade;
    int valorUnitario;
    string dtVencimento;
    string dtAdquirida;
    string nomeFabricante;

    string tipo;
    int quantDoses;
    int intervalo;

    string dosagem;
    string administracao;
    string disponibilizacao;

    //string tipo;
    string descricao;

    Local local;
    Insumo *insumo;

    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, dtAdquirida);
    getline(cin, nomeFabricante);
    getline(cin, tipo);
    cin >> quantDoses >> intervalo;
    cin.ignore();
    insumo = new Vacina(nome, quantidade, valorUnitario, dtVencimento, dtAdquirida, nomeFabricante, tipo, quantDoses, intervalo);
    local.addInsumoArr(*insumo, 0);
    local.addInsumoVec(insumo);

    cout << endl;

    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, dtAdquirida);
    getline(cin, nomeFabricante);
    getline(cin, dosagem);
    getline(cin, administracao);
    getline(cin, disponibilizacao);
    insumo = new Medicamento(nome, quantidade, valorUnitario, dtVencimento, dtAdquirida, nomeFabricante, dosagem, administracao, disponibilizacao);
    local.addInsumoArr(*insumo, 1);
    local.addInsumoVec(insumo);

    cout << endl;

    getline(cin, nome);
    cin >> quantidade >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, dtAdquirida);
    getline(cin, nomeFabricante);
    getline(cin, tipo);
    getline(cin, descricao);
    insumo = new EPI(nome, quantidade, valorUnitario, dtVencimento, dtAdquirida, nomeFabricante, tipo, descricao);
    local.addInsumoArr(*insumo, 2);
    local.addInsumoVec(insumo);

    cout << endl;

    return 0;
}