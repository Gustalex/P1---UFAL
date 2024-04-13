#include <stdio.h>

int contadorcor(char letra1,char letra2,char letra3,char letra4,char letra5){
    int cor = 0;
    
    if (letra1 == 'c') cor++;

    if (letra2 == 'c') cor++;

    if (letra3 == 'c') cor++;

    if (letra4 == 'c') cor++;

    if (letra5 == 'c') cor++;

    
    return cor;
}
int contadorfla(char letra6,char letra7,char letra8,char letra9,char letra10){
    
    int fla = 0;

    if (letra6 == 'f') fla++;

    if (letra7 == 'f') fla++;

    if (letra8 == 'f') fla++;

    if (letra9 == 'f') fla++;

    if (letra10 == 'f') fla++;

    return fla;
}


int main (){

    char jogo1,jogo2,jogo3,jogo4,jogo5;
    int y, p;
    int golscor, golsfla,vitoriascor,vitoriasfla;
    double mediacor, mediafla;
    int pontoscor = 0;
    int pontosfla = 0;

    scanf(" %c %c %c %c %c",&jogo1,&jogo2,&jogo3,&jogo4,&jogo5);
    scanf("%d %d",&p,&y);
    scanf("%d %d",&golsfla,&golscor);
    scanf("%lf %lf",&mediafla,&mediacor);

    vitoriascor = contadorcor(jogo1,jogo2,jogo3,jogo4,jogo5);
    vitoriasfla = contadorfla(jogo1,jogo2,jogo3,jogo4,jogo5);


    if (vitoriascor > vitoriasfla) pontoscor += 40;
    else pontosfla += 40;

    if (p == 1) pontosfla += 20;
    if (y == 1) pontoscor += 20;

    if (golscor > golsfla) pontoscor += 15;
    else pontosfla += 15;
    
   if (mediacor >=2)
   {
        pontoscor +=10;
        if (mediacor >= 2 && mediafla >=2)
        {
            pontosfla +=10;
        }    
   }
   else if (mediafla >= 2)
   {
    pontosfla +=10;
        if (mediacor>= 2 && mediafla >=2)
        {
            pontoscor +=10;
        }
   }
   
    if (pontoscor > pontosfla)
    {
        printf("Pedro tem mais chances de comer o brownie\n");
        printf("Pontos:%d\n",pontoscor);
    }
    else
    {
        printf("Luiza tem mais chances de comer o brownie\n");
        printf("Pontos:%d\n",pontosfla);
    }

    return 0;
}