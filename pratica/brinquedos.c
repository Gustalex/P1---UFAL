#include <stdio.h>

int brinquedos(int alt, int idd){
    int cont = 0;

    if(alt >= 150 && idd >= 12) cont++;
    if(alt >= 140 && idd >= 14) cont++;
    if(alt >= 170 || idd >= 16) cont++;

        return cont;
}

int main(){
 
    int altura, idade;

    scanf("%d %d",&altura,&idade);

    int qtdbrnq = brinquedos(altura, idade);

    printf("%d\n",qtdbrnq);

    return 0;
}