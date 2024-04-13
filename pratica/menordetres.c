#include <stdio.h>

int menor3(int a, int b, int c){

    if(a <= b && a <= c) return a;
    
    if(b <= a && b <= c) return b;
    
    if(c <= a && c <= b) return c;
}

int main (){

    int num1, num2, num3;
    
    scanf("%d %d %d",&num1,&num2,&num3);

    int menor = menor3(num1,num2,num3);

    printf("%d\n",menor);

    return 0;
}