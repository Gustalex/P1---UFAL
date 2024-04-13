#include <stdio.h>

int letraval(char letra1, int valora, int valorb, int valorc, int valord){

    if(letra1 == 'a') return valora;
    if(letra1 == 'b') return valorb;
    if(letra1 == 'c') return valorc;
    if(letra1 == 'd') return valord;

}
double calcfinal(double media, double num, double letra){
    double fator, pontfinal;

    if (media >= 0 && media <= 10)
    {
        fator = 0.4;
        pontfinal = num + letra + (letra * fator);
    }
    else if(media < 10 && media <= 30)
    {
        fator = 0.6;
        pontfinal = num + letra + (letra * fator);
    } 
    else if(media < 30 && media <= 60)
    {
        fator = 0.8;
        pontfinal = num + letra + (letra * fator);
    }
    else
    {
        fator = 1;
        pontfinal = num + letra + (letra * fator);
    }
    return pontfinal;
}
int main(){

    double numA, numG, numR, numH;
    char letraA, letraG, letraR, letraH;
    double valletraA, valletraB, valletraC, valletraD;

    scanf("%lf %lf %lf %lf",&numA,&numG,&numR,&numH);
    scanf(" %c %c %c %c",&letraA,&letraG,&letraR,&letraH);
    scanf("%lf %lf %lf %lf",&valletraA,&valletraB,&valletraC,&valletraD);

    double Media = (numA + numG + numR + numH)/4;

    double valorA = letraval(letraA,valletraA, valletraB, valletraC, valletraD);
    double valorG = letraval(letraG,valletraA, valletraB, valletraC, valletraD);
    double valorR = letraval(letraR,valletraA, valletraB, valletraC, valletraD);
    double valorH = letraval(letraH,valletraA, valletraB, valletraC, valletraD);

    double valorfA = calcfinal(Media,numA,valorA);
    double valorfG = calcfinal(Media,numG,valorG);
    double valorfR = calcfinal(Media,numR,valorR);
    double valorfH = calcfinal(Media,numH,valorH);

    if(valorfA < valorfG && valorfA < valorfR && valorfA < valorfH)
    {
        printf("Anderson quem vai pagar o lanche!:D\n");
    }
    else if(valorfG < valorfA && valorfG < valorfR && valorfG < valorfH)
    {
        printf("Guilherme quem vai pagar o lanche!:D\n");
    }
    else if(valorfR < valorfA && valorfR < valorfG && valorfR < valorfH)
    {
        printf("Rita quem vai pagar o lanche!:D\n");
    }
    else
    {
        printf("Higor quem vai pagar o lanche!:D\n");
    }

    return 0;
}