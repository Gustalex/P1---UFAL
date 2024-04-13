#include <stdio.h>

// No huxley esta apenas a perte do codigo que printa a array de tras pra frente
// aqui temos como inverter de fato uma array

void troca(int *a, int *b){

    int ueum;

    ueum = *a;
    *a = *b;
    *b = ueum;
}

void inverter(int numeros[], int inicio, int final){

    if(final < inicio) return;

    if(inicio < final) troca(&numeros[inicio],&numeros[final]);
    
    inverter(numeros,inicio + 1, final - 1);
}

void printinverso(int numeros[], int index, int tamanho){
    
    if(index == tamanho) return;

    printf("%d ",numeros[index]);
    
    printinverso(numeros,index + 1, tamanho);
}

void lernum(int numeros[], int index, int tamanho){

    if(index == tamanho) return;

    scanf("%d",&numeros[index]);

    lernum(numeros, index + 1, tamanho);
}   

int main(){

    int qtd;

    scanf("%d",&qtd);

    int numeros[qtd];

    lernum(numeros,0,qtd);

   inverter(numeros, 0, qtd - 1);

    printinverso(numeros, 0, qtd);

    return 0;
}