#include <stdio.h>
 
int mdc(int x, int y){
 
    if(x%y == 0)
    {
        return y;
    }
 
    return mdc(y, x%y);
}
 
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
 
int batalha(int round, int skill1, int vida1, int ataque1, int skill2, int vida2, int ataque2)
{
    if(vida2 <= 0)
    {
        return 1;
    }
    if(vida1 <= 0)
    {
        return 2;
    }
 
    if(skill1 == 1 && primo(round, 2) == 1)
    {
        vida2 -= ataque1;
    }
    if(skill1 == 2 && mdc(vida1, vida2) == 1)
    {
        ataque1 += 25;
    }
    if(skill1 == 3 && (primo(ataque1, 2) == 1 || primo(vida1, 2) == 1))
    {
        ataque1 += 10;
    }
 
    vida2 -= ataque1;
 
    if(skill2 == 1 && primo(round, 2) == 1)
    {
        vida1 -= ataque2;
    }
    if(skill2 == 2 && mdc(vida2, vida1) == 1)
    {
        ataque2 += 25;
    }
    if(skill2 == 3 && (primo(ataque2, 2) == 1 || primo(vida2, 2) == 1))
    {
        ataque2 += 10;
    }
 
    vida1 -= ataque2;
 
    return batalha(round+1, skill1, vida1, ataque1, skill2, vida2, ataque2);
}
 
void loop(int n, int vitoriaWill, int vitoriaGabriel)
{
    if(n == 0)
    {
        printf("Will ganhou %d rodadas\n", vitoriaWill);
        printf("Gabriel ganhou %d rodadas\n", vitoriaGabriel);
        return;
    }
 
    int inicia, skillWill, vidaWill, ataqueWill, skillGab, vidaGab, ataqueGab, vencedor;
    scanf("%d %d %d %d %d %d %d", &inicia, &skillWill, &ataqueWill, &vidaWill, &skillGab, &ataqueGab, &vidaGab);
 
    if(inicia == 1)
    {
        vencedor = batalha(1, skillWill, vidaWill, ataqueWill, skillGab, vidaGab, ataqueGab);
        if(vencedor == 1)
        {
            vitoriaWill++;
        }
        else
        {
            vitoriaGabriel++;
        }
    }
    else
    {
        vencedor = batalha(1, skillGab, vidaGab, ataqueGab, skillWill, vidaWill, ataqueWill);
        if(vencedor == 1)
        {
            vitoriaGabriel++;
        }
        else
        {
            vitoriaWill++;
        }
    }
 
    loop(n-1, vitoriaWill, vitoriaGabriel);
}
 
int main ()
{
    int n;
    scanf("%d", &n);
    loop(n, 0, 0);
 
    return 0;
}