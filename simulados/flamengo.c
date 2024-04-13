#include <stdio.h>
 
int main(){
    int casa, tempo, qntPessoas, qntLesao, pE;
    double chances = 100;
    scanf("%d %d %d %d %d", &casa, &tempo, &qntPessoas, &qntLesao, &pE);
 
    if (casa == 1){
        if (tempo == 1){ //Sol
            chances += 33.21;
        }
        else if (tempo == 2) //Neve
            chances += 10.51;
        else if (tempo == 3){ // Chuva
            chances -= 20.7;
        }
 
        if (qntPessoas > 40000){
            chances += 0.0008 * qntPessoas;
        }
        else{
            chances -= 0.0008*qntPessoas;
        }
 
        if (pE > 0){
            chances += 2.7 * pE;
        }
        else{
            chances -= 1.8 * pE;
        }
    }
 
    if (casa == 0){
        if (tempo == 1){
            chances += 10.87;
        }
 
        if (qntPessoas > 4500){
            chances -= 0.0003*qntPessoas;
        }
        else{
            chances -= 0.0001*qntPessoas;
        }
 
        if (pE > 0){
            chances += 5.2 * pE;
        }
        else{
            chances -= 1.5 * pE;
        }
 
        if (tempo == 3 || tempo == 2){
            chances = 0;
        }
    }
 
    chances -= 2.7 * qntLesao;
 
 
    if (chances >= 100){
        printf("A chance de vitoria do flamengo e de 100.00\n");
    }
    else if (chances <= 0){
        printf("A chance de vitoria do flamengo e de 0.00\n");
    }
    else{
        printf("A chance de vitoria do flamengo e de %.2lf\n", chances);
    }
 
    return 0;
}