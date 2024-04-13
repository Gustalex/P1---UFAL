#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double salario, valorcomp, limcomp, novolim, limrest;

    scanf("%lf %lf", &salario, &valorcomp);

    limcomp = salario * 0.30;

    limrest = limcomp - valorcomp;

    if (limrest <= 0) printf("0.00");

    else
    {
        novolim = limcomp - valorcomp;
        printf("%.2lf", novolim);
    }

    
    return 0;
}