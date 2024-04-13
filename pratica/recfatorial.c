#include <stdio.h>

int fat(int a){

    if(a == 0) return 1;

    return a * fat(a-1);
}
int main(){

    int num1;
    
    scanf("%d",&num1);

    printf("%d",fat(num1));

    return 0;
}