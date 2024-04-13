#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double livros, alunos;
    double indice; 

    scanf("%lf %lf",&livros, &alunos);
    
    indice = livros / alunos;
    
    
    if (indice >= 1.0/8.0) printf("A");

    else if (indice >= 1.0/12.0 && indice <= 1.0/9.0) printf("B");

    else if (indice >= 1.0/18 && indice <= 1.0/13.0) printf("C");

    else if (indice < 1.0/18.0) printf("D");
    
    return 0;
}