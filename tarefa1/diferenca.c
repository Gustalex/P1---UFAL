#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int a, b, c, d;
    int produto1, produto2, diferenca;
    
    scanf("%d %d %d %d",&a, &b, &c, &d);

    produto1 = a * b;
    produto2 = c * d;
    diferenca = produto1 - produto2;

    printf("DIFERENCA = %d",diferenca); 
    
    return 0;
}