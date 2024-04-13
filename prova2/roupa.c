#include <stdio.h>

double tama(char Tamanho){
    double valorTam;

    if (Tamanho == 'P') valorTam = 2.75;

    if (Tamanho == 'M') valorTam = 3.66;

    if (Tamanho == 'G') valorTam = 5.17;

    return valorTam;

}
double tip(char Tipo){
    double valorTipo;

    if (Tipo == 'B') valorTipo = 3.82;

    if (Tipo == 'C') valorTipo = 4.55;
    
    if (Tipo == 'M') valorTipo = 7.12;
    
    return valorTipo;
}

int main(){

    char tamanho, tipo;
    double valortam, valortipo, customaterial, valorfinal;

    scanf("%lf %c %c",&customaterial,&tamanho,&tipo);

    valorfinal = (customaterial*tama(tamanho) + customaterial * tip(tipo))/2;

    printf("%.2lf R$",valorfinal);

    return 0;
}