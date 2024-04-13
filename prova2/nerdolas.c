#include <stdio.h>


int valorletra(char letra, int valorA, int valorB, int valorC, int valorD, int valorE)
{
    if(letra == 'a') return valorA;
    
    if(letra == 'b') return valorB;
    
    if(letra == 'c') return valorC;
    
    if(letra == 'd') return valorD;
    
    if (letra == 'e') return valorE;
}
int valorletra2(char letra, int valorI, int valorJ, int valorK, int valorL, int valorM){
    
    if (letra == 'i') return valorI;

    if (letra == 'j') return valorJ;

    if (letra == 'k') return valorK;

    if (letra == 'l') return valorL;

    if (letra == 'm') return valorM;
}

int calculo(int valor1, int valor2){
    int produto = valor1 * valor2;
    int total;

    if (produto < 100) total = produto;

    else 
    {
        total = (valor1 * valor2)%100; 
    }
    return total;
}

int main(){

    char letrRY1, letrF1, letrRU1, letrHE1;
    char letrRY2, letrF2, letrRU2, letrHE2;
    int valora,valorb,valorc,valord,valore;   
    int valori,valorj,valork,valorl,valorm;
   
    
    scanf(" %c %c %c %c",&letrRY1,&letrF1,&letrRU1,&letrHE1);
    scanf(" %c %c %c %c",&letrRY2,&letrF2,&letrRU2,&letrHE2);
    scanf("%d %d %d %d %d",&valora,&valorb,&valorc,&valord,&valore);
    scanf("%d %d %d %d %d",&valori,&valorj,&valork,&valorl,&valorm);


    int valorRY1 = valorletra(letrRY1, valora, valorb, valorc, valord, valore);
    int valorF1 = valorletra(letrF1, valora, valorb, valorc, valord, valore);
    int valorRU1 = valorletra(letrRU1, valora, valorb, valorc, valord, valore);
    int valorHE1 = valorletra(letrHE1, valora, valorb, valorc, valord, valore);

    int valorRY2 = valorletra2(letrRY2, valori, valorj, valork, valorl, valorm);
    int valorF2 = valorletra2(letrF2, valori, valorj, valork, valorl, valorm);
    int valorRU2 = valorletra2(letrRU2, valori, valorj, valork, valorl, valorm);
    int valorHE2 = valorletra2(letrHE2, valori, valorj, valork, valorl, valorm);
 
    
    int vfinalRY = calculo(valorRY1,valorRY2);
    int vfinialF = calculo(valorF1,valorF2);
    int vfinalRU = calculo(valorRU1,valorRU2);
    int vfinalHE = calculo(valorHE1,valorHE2);

    if(vfinalRY > vfinialF &&  vfinalRY > vfinalRU && vfinalRY > vfinalHE)
    {
        printf("Ryan %d - Vencedor\n",vfinalRY);
    }
    else if(vfinialF > vfinalRY && vfinialF > vfinalRU && vfinialF > vfinalHE)
    {
        printf("Filipe %d - Vencedor\n",vfinialF);
    }
    else if(vfinalRU > vfinalRY && vfinalRU > vfinialF && vfinalRU > vfinalHE)
    {
        printf("Ruan %d - Vencedor\n",vfinalRU);
    }
    else 
    {
        printf("Heron %d - Vencedor\n",vfinalHE);
    }


    if(vfinalRY < vfinialF &&  vfinalRY < vfinalRU && vfinalRY < vfinalHE)
    {
        printf("Ryan %d - Perdedor\n",vfinalRY);

    }
    else if(vfinialF < vfinalRY && vfinialF < vfinalRU && vfinialF < vfinalHE)
    {
        printf("Filipe %d - Perdedor\n",vfinialF);

    }
    else if(vfinalRU < vfinalRY && vfinalRU < vfinialF && vfinalRU < vfinalHE)
    {
        printf("Ruan %d - Perdedor\n",vfinalRU);

    }
    else
    {
        printf("Heron %d - Perdedor\n",vfinalHE);

    }
    return 0;
}