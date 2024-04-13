#include <stdio.h>  

void calc(double entradas, double *totalenfei){

    if(entradas <= 0) return;

    double qtd, preco;
    scanf("%lf%lf",&qtd,&preco);

    *totalenfei += qtd * preco;

    calc(entradas - 1,totalenfei);

}
int main(){

    double arvore;

    scanf("%lf",&arvore);

    double enfeites = 0;
    calc(3,&enfeites);

    double ptotal = arvore + enfeites;

    printf("%.2lf\n%.2lf\n",ptotal,(ptotal/21));

    return 0;
}