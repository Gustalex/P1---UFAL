#include <stdio.h>

int main(){

    double salario1, pctaum, valaum, salario2;

    scanf("%lf",&salario1);

    if(salario1 <= 280) salario2 = salario1 * 1.20;

    else if (salario1 > 280 && salario1 < 700) salario2 = salario1 * 1.15;

    else if (salario1 > 700 && salario1 < 1500) salario2 = salario1 * 1.10;

    else if (salario1 >= 1500) salario2 = salario1 * 1.05;

    pctaum = ((salario2/salario1) * 100) - 100;
    valaum = salario2 - salario1;

    printf("%.2lf\n%.0lf\n%.2lf\n%.2lf",salario1,pctaum,valaum,salario2);

    return 0;
}