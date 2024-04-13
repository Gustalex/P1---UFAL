#include <stdio.h>

int fat(int x){

if(x == 0) return 1;

else return x * fat(x-1); 

}

int main(){

    int fatres, num;

    scanf("%d",&num);

    fatres = fat(num);

    printf("%d",fatres);

    return 0;
}