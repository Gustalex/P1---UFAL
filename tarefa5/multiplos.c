#include <stdio.h>

int mult(int a, int b, int num){

    int cont = 0;

    if(num <= 0) return 0;

    if(num % a == 0 && num % b == 0) cont++;

    return cont + mult(a,b,num-1);
}


int main(){

    int num1, num2;

    scanf("%d %d",&num1,&num2);

    int rslt = mult(num1,num2,49);

    printf("%d\n",rslt);

    return 0;
}