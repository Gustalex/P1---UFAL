#include <stdio.h>
 
int primo(int n, int divid)
{
    if(n < 2)
    {
        return 0;
    }
    if(n == divid)
    {
        return 1;
    }
    if(n % divid == 0)
    {
        return 0;
    }
    primo(n, divid+1);
}
 
int soma(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n%10 + soma(n/10);
}
 
void loop(int n, int numero)
{
    if(n == 0)
    {
        printf("%d", numero);
        return;
    }
 
    int numeroAtual;
    scanf("%d", &numeroAtual);
 
    if(primo(numero, 2) == 1 && primo(numeroAtual, 2) == 1){
        numero += numeroAtual;
    }
    else{
        numero = soma(numero) * soma(numeroAtual);
    }
 
    loop(n-1, numero);
}
 
int main ()
{
    int inicial, n;
    scanf("%d %d", &n, &inicial);
    loop(n, inicial);
 
    return 0;
}
