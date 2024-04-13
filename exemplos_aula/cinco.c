#include <stdio.h>

int main(){

    int a;

    scanf("%d", &a);

    if (a%5==0) printf("O numero %d e multiplo de 5", a);

    else printf("O numero %d nao e multiplo de 5", a);

    return 0;
}