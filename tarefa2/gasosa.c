#include <stdio.h>


int main(){

    double litros, preco;
    char tipo;

    scanf("%lf %c",&litros,&tipo);

    if (tipo == 'A')
    {
        if (litros <= 20) preco = (litros * 1.90) * 0.97;
        
        else preco = (litros * 1.90) * 0.95;    
    }
    if (tipo == 'G')
    {
        if (litros <= 20) preco = (litros * 2.50) * 0.96;
        
        else preco = (litros * 2.50) * 0.94;    
    }
    if (tipo == 'D')
    {
        if (litros <= 25) preco = litros * 1.66;
        
        else preco = (litros * 1.66) * 0.96;    
    }

        printf("R$ %.2lf",preco);
    return 0;
}