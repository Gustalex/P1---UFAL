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
 
int fibo(int a, int b, int n)
{
    if(n == a)
    {
        return 1;
    }
    if(a > n)
    {
        return 0;
    }
    return fibo(b, a+b, n);
}
 
void loop(int rodada)
{
    if(rodada == 0)
    {
        return;
    }
 
    int pontoJack = 0, pontoPedro = 0, numeroJack, numeroPedro;
    scanf("%d %d", &numeroJack, &numeroPedro);
 
    if(primo(numeroJack, 2) == 1 && fibo(0, 1, numeroJack) == 1)
    {
        pontoJack = 3;
    }
    else if(primo(numeroJack, 2) == 1 || fibo(0, 1, numeroJack) == 1)
    {
        pontoJack = 1;
    }
 
    if(primo(numeroPedro, 2) == 1 && fibo(0, 1, numeroPedro) == 1)
    {
        pontoPedro = 3;
    }
    else if(primo(numeroPedro, 2) == 1 || fibo(0, 1, numeroPedro) == 1)
    {
        pontoPedro = 1;
    }
 
    if(pontoPedro > pontoJack)
    {
        printf("Ordep\n");
    }
    else if(pontoJack > pontoPedro)
    {
        printf("Kcaj\n");
    }
    else
    {
        if(numeroJack > numeroPedro)
        {
            printf("Kcaj\n");
        }
        else
        {
            printf("Ordep\n");
        }
    }
 
    loop(rodada-1);
}
 
int main ()
{
    int n;
    scanf("%d", &n);
    loop(n);
 
    return 0;
}
