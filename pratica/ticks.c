#include <stdio.h>

int main(){

    int diasreal, quantcasas,ticksporcasa;
    int ticksutil = 108000;
    
    scanf("%d %d",&diasreal,&quantcasas);

    ticksporcasa = (diasreal*ticksutil)/quantcasas;

    
    printf("%d",ticksporcasa);

    return 0;
}