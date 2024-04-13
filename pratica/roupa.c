#include <stdio.h>

double tamanho(char a){

    if (a == 'P') return 2.75;

    else if (a == 'M') return 3.66;

    else return 5.17;
}
double tipo(char b){

    if (b == 'B') return 3.82;

    else if (b == 'C') return 4.55;

    else return 7.12;
}
int main(){

    double precof,custom, precotam,precotipo;
    char  tamr,tipor;
    scanf("%lf %c %c",&custom,&tamr,&tipor);

    precotam = custom * tamanho(tamr);
    precotipo = custom * tipo(tipor);

    precof = (precotam + precotipo)/2;
    

    printf("%.2lf R$",precof);
    
    return 0;
}