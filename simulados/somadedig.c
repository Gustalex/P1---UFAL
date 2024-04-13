#include <stdio.h>
 
int soma(int numero)
{
    if(numero == 0)
    {
        return 0;
    }
 
    return numero%10 + soma(numero/10);
}
 
int fat(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * fat(n-1);
}
 
int primo(int n, int div)
{
    if(n == div)
    {
        return 1;
    }
    if(n % div == 0 || n <= 1)
    {
        return 0;
    }
 
    return primo(n, div+1);
}
 
double proxPrimo(int n)
{
    if(primo(n, 2) == 1)
    {
        return n;
    }
 
    return proxPrimo(n+1);
}
 
void loop(int n, int maior, int menor)
{
    if(n == 0)
    {
        printf("\nMaior soma: %d\n", maior);
        printf("Menor soma: %d\n", menor);
        printf("Valor Y: %.2lf", (fat(menor) + proxPrimo(menor+1)) / maior);
        return;
    }
 
    int numero;
    scanf("%d", &numero);
    int somaN = soma(numero);
    printf("N: %d - Soma: %d\n", numero, somaN);
 
    if(somaN > maior)
    {
        maior = somaN;
    }
    if(somaN < menor)
    {
        menor = somaN;
    }
 
    return loop(n-1, maior, menor);
}
 
int main ()
{
    int n;
    scanf("%d", &n);
    loop(n, 0, 10000);
 
    return 0;
}