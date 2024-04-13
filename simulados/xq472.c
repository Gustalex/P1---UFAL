#include <stdio.h>
 
void soma(int numero)
{
    if(numero == 0)
    {
        printf("\n");
        return;
    }
 
    if(numero % 2 == 0)
    {
        printf(".");
    }
    else
    {
        printf("-");
    }
    return soma(numero/10);
}
 
void loop(int n)
{
    if(n == 10)
    {
        return;
    }   
 
    int numero;
    scanf("%d", &numero);
    soma(numero);
 
    return loop(n+1);
}
 
int main ()
{
    loop(0);
 
    return 0;
}