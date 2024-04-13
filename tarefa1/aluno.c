#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double nota1, nota2, nota3;
    double media;

    scanf("%lf %lf %lf",&nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media>=70 && media <= 100) printf("A media do aluno foi %.2lf e ele foi APROVADO",media);
    
    else if (media >= 0 && media <= 40) printf("A media do aluno foi %.2lf e ele foi REPROVADO",media);
    
    else if (media >= 40 && media <70) printf("A media do aluno foi %.2lf e ele foi FINAL",media);
    
    else printf("Media invalida");

    return 0;
}