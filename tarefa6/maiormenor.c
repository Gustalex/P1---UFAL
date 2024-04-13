#include <stdio.h>

int checkmaior(int *numeros, int index, int maior){

    if(index < 0) return maior;

    if(numeros[index] > maior) maior = numeros[index];    

    return checkmaior(numeros,index - 1, maior);
}

int checkmenor(int *numeros, int index, int menor){

    if(index < 0) return menor;

    if(numeros[index] < menor) menor = numeros[index];    

    return checkmenor(numeros,index - 1, menor);

}

void lernum(int *numeros, int index){

    if(index == 6) return;

    scanf("%d",&numeros[index]);

    lernum(numeros,index + 1);
    
}

int main(){

    int numeros[6];

    lernum(numeros,0);
    int maior = checkmaior(numeros,5,numeros[5]);
    int menor = checkmenor(numeros,5,numeros[5]);

    printf("%d\n%d\n",menor,maior);

    return 0;
}