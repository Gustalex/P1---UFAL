#include <stdio.h>

int main(){

    int consumo, conta;

    scanf("%d",&consumo);

    if(consumo > 0 && consumo <= 10)
    {
        conta = 7;
    }
    else
    {
        if (consumo >= 11 && consumo <= 30)
        {
            conta = 7 + (consumo - 10) * 1;
        }
        else if (consumo >= 31 && consumo <= 100)
        {
            conta = 7 + 20 + (consumo - 30) * 2;
        }
        else 
        {
            conta = 7 + 20 + 140 + (consumo - 100) * 5;
        }

    }
        printf("%d\n",conta);

    return 0;
}