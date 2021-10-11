#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){

}

TrabalhadorPorHora::TrabalhadorPorHora(float valorDaHora){ 
    this->valorDaHora = valorDaHora; 
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    if(horasSemanais > 40){
        salario = (((horasSemanais-40)*1.5)+40) * valorDaHora * 4;
    } else {
        salario = horasSemanais * valorDaHora * 4;
    }
    return  salario/4;
}