#include <stdio.h>


int fat (int num1){
    
    int fatorial;

    if (num1 == 0) fatorial = 1;

    else
    {
        fatorial = num1* fat(num1 - 1);
    }
    return fatorial;
}



int main(){

    int result, num;

    scanf("%d",&num);

    result = fat(num);
    printf("%d\n",result);

    return 0;
}