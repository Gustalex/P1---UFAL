#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int numero, horas;
    double vporh, salario;
    
    scanf("%d %d %lf", &numero, &horas, &vporh);
    
    salario = horas * vporh;

    printf("NUMBER = %d\nSALARY = R$ %.2lf", numero, salario);
    
    return 0;
}