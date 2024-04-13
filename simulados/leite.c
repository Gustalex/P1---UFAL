#include <stdio.h>
 
int mdc(int x, int y){
 
    if(x%y == 0)
    {
        return y;
    }
 
    return mdc(y, x%y);
}
 
int fatorial(int x){
 
    if(x <= 0)
    {
        return 1;
    }
 
    return x * fatorial(x-1);
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
 
int somatorio(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n%10 + somatorio(n/10);
}
 
void loop(int diaAtual, int diaFinal, int diariaJack, int diariaPedro, double totalJack, double totalPedro)
{
    totalJack += diariaJack;
    totalPedro += diariaPedro;
 
    int fatorialDia = fatorial(diaAtual);
    int somatorioDia = somatorio(fatorialDia);
 
    if(primo(diaAtual, 2) == 1)
    {
        totalJack += diariaJack * 0.05;
    }
 
    if(primo(somatorioDia, 2) == 1)
    {
        totalJack += totalPedro * 0.10;
        totalPedro -= totalPedro * 0.10;
    }
 
    if(diariaPedro % somatorioDia == 0)
    {
        totalPedro += 30;
    }
 
    if(mdc(diariaPedro, diaAtual) == 1)
    {
        totalPedro += totalJack * 0.10;
        totalJack -= totalJack * 0.10;
    }
 
    if(diaAtual == diaFinal)
    {
        if(totalJack > totalPedro){
            printf("Kcaj Ganhou!\n%.2lf", totalJack);
        }
        else{
            printf("Ordep Ganhou!\n%.2lf", totalPedro);
        }
 
        return;
    }
 
    loop(diaAtual+1, diaFinal, diariaJack, diariaPedro, totalJack, totalPedro);
}
 
int main ()
{
    int dias, diariaJack, diariaPedro;
    scanf("%d %d %d", &dias, &diariaJack, &diariaPedro);
    loop(1, dias, diariaJack, diariaPedro, 0, 0);
 
    return 0;
}
