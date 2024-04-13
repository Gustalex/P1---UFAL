#include <stdio.h>

void checknum(int numeros[], int index, int *cont){
        
    if(index < 0) return;
    
    else
    {
        if(numeros[10] == numeros[index]) *cont = *cont + 1;

    }

    checknum(numeros,index - 1,cont);

}


void lernum(int numeros[], int index){

    if(index == 11) return;

    scanf("%d",&numeros[index]);

    lernum(numeros,index + 1);
}



int main(){

    int numeros[11];

    int contador = 0;

    lernum(numeros,0);

    checknum(numeros,10,&contador);

    printf("%d\n",contador - 1);

    return 0;
}