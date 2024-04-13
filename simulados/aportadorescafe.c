#include <stdio.h>
 
int primo(int n, int div)
{
    if(n == div)
    {
        return 1;
    }
    if(n % div == 0 || n < 2)
    {
        return 0;
    }
 
    return primo(n, div+1);
}
 
int potenciaDois(int rodada, int i)
{
    if(rodada == i)
    {
        return 1;
    }
    if(i > rodada)
    {
        return 0;
    }
 
    return potenciaDois(rodada, i*2);
}
 
int batalha(int atkPedro, int hpPedro, int atkJack, int hpJack, int rodada)
{
    if(hpJack <= 0)
    {
        return 1;
    }
    if(hpPedro <= 0)
    {
        return 0;
    }
 
    if(potenciaDois(rodada, 1) == 0)
    {
        if(hpPedro > atkPedro)
        {
            int aux = atkPedro;
            atkPedro = hpPedro;
            hpPedro = aux;
        }
        hpJack -= atkPedro;
    }
 
    if(primo(rodada, 2) == 0)
    {
        if(hpJack % 2 != 0)
        {
            atkJack += 5;
        }
        hpPedro -= atkJack;
    }
 
    batalha(atkPedro, hpPedro, atkJack, hpJack, rodada+1);
}
 
void loop(int n, int winPedro, int winJack)
{
    if(n == 0)
    {
        if(winPedro > winJack)
        {
            printf("ordep ganhou %d coffees\n", winPedro);
        }
        else if(winJack > winPedro)
        {
            printf("kcaj ganhou %d coffees\n", winJack);
        }
        else
        {
            printf("F coffees\n");
        }
        return;
    }
 
    int atkPedro, hpPedro, atkJack, hpJack;
    scanf("%d %d %d %d", &atkPedro, &hpPedro, &atkJack, &hpJack);
 
    if(batalha(atkPedro, hpPedro, atkJack, hpJack, 1) == 1)
    {
        winPedro++;
    }
    else
    {
        winJack++;
    }
 
    return loop(n-1, winPedro, winJack);
}
 
int main ()
{
    int n;
    scanf("%d", &n);
    loop(n, 0, 0);
 
    return 0;
}