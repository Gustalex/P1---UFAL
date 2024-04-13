#include <stdio.h>

void mult2(int a, int b){

    if(a<=b)
    {
        if (a % 2 == 0)
        {
            printf("%d\n",a);
        }
        mult2(a+1,b);
        
    }
}

int main(){

    int num1, num2;
    
    scanf("%d %d",&num1,&num2);

    mult2(num1,num2);

    return 0;
}