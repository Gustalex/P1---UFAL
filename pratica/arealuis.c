#include <stdio.h>
#include <math.h>


int tipoarea(char forma1, double tamanho1){
    double area;
    double raiz3 = 1.7;
    double pi = 3.141;


    if (tamanho1 <= 0)
    {
        printf("Entrada invalida!");
        return 0;
    } 

    else if (forma1 == 'C' || forma1 == 'c') 
    {
        area = pi * (tamanho1 * tamanho1);
        printf("%.2lf\nCirculo\n",area);
    }
    else if (forma1 == 'Q' || forma1 == 'q') 
    {
        area =  (tamanho1 * tamanho1);
        printf("%.2lf\nQuadrado\n",area);
    }
    else if (forma1 == 'T' || forma1 == 't') 
    {
        area = ((tamanho1 * tamanho1) * raiz3)/4;
        printf("%.2lf\nTriangulo equilatero\n",area);
    }

    else printf("Entrada invalida!");

    return area;
}


int main(){

    char forma;
    double tamanho, result;

    scanf(" %c",&forma);
    scanf("%lf",&tamanho);

    result =  tipoarea(forma,tamanho);

    

    return 0;
}