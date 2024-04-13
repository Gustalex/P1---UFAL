#include <stdio.h>

int fibonas(int a){

    if(a == 0) return 0;
    else if(a == 1) return 1;

    return fibonas(a-1) + fibonas(a-2);
    
}



int main(){

    int num;

    scanf("%d",&num);

    printf("%d",fibonas(num));

    return 0;
}