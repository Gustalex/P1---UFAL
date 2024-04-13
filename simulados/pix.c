#include <stdio.h>
 
int valorLetra(char letra, int valorA, int valorB, int valorC, int valorD)
{
    if(letra == 'a')
    {
        return valorA;
    }
    if(letra == 'b')
    {
        return valorB;
    }
    if(letra == 'c')
    {
        return valorC;
    }
    if(letra == 'd')
    {
        return valorD;
    }
}
 
int total(int media, int valor, int letra)
{
    if(media >= 0 && media <= 10)
    {
        return valor + letra + (letra*0.4);
    }
    if(media > 10 && media <= 30)
    {
        return valor + letra + (letra*0.6);
    }
    if(media > 30 && media <= 60)
    {
        return valor + letra + (letra*0.8);
    }
    if(media > 60)
    {
        return valor + letra + letra;
    }
}
 
int main (){
 
    int numA, numG, numR, numH;
    char letraA, letraG, letraR, letraH;
    int valorA, valorB, valorC, valorD;
 
    scanf("%d %d %d %d", &numA, &numG, &numR, &numH);
    scanf(" %c %c %c %c", &letraA, &letraG, &letraR, &letraH);
    scanf("%d %d %d %d", &valorA, &valorB, &valorC, &valorD);
 
    int media = (numA + numG + numR + numH) / 4;
 
    int ValorA = valorLetra(letraA, valorA, valorB, valorC, valorD);
    int ValorG = valorLetra(letraG, valorA, valorB, valorC, valorD);
    int ValorR = valorLetra(letraR, valorA, valorB, valorC, valorD);
    int ValorH = valorLetra(letraH, valorA, valorB, valorC, valorD);
 
    int totalA = total(media, numA, ValorA);
    int totalG = total(media, numG, ValorG);
    int totalR = total(media, numR, ValorR);
    int totalH = total(media, numH, ValorH);
 
    if(totalA <= totalG && totalA <= totalR && totalA <= totalH)
    {
        printf("Anderson quem vai pagar o lanche!:D\n");
    }
    else if(totalG <= totalA && totalG <= totalR && totalG <= totalH)
    {
        printf("Guilherme quem vai pagar o lanche!:D\n");
    }
    else if(totalR <= totalG && totalR <= totalA && totalR <= totalH)
    {
        printf("Rita quem vai pagar o lanche!:D\n");
    }
    else if(totalH <= totalG && totalH <= totalR && totalH <= totalA)
    {
        printf("Higor quem vai pagar o lanche!:D\n");
    }
 
    return 0;
}