#include <stdio.h>

int somadigi(int a){

    if(a < 9) return a;

    return a % 10 + somadigi(a/10);    
}

int main(){
    int num1;   
    scanf("%d",&num1); 

    printf("%d",somadigi(num1));
    
    return 0;
}