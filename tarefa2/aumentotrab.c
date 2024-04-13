#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double salario, aumento;
   
    scanf("%lf",&salario);

    if (salario > 500)
    {
        aumento = salario * 1.10;
        printf("%.2lf", aumento);
        return 0;
    }    
    if (salario > 300 && salario <= 500)
    {
        aumento = salario * 1.07;
        printf("%.2lf", aumento);
        return 0;
    }
    else
        aumento = salario * 1.05;
        printf("%.2lf", aumento);
    
    return 0;
}