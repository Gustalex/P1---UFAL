#include <stdio.h>

void troca(int *a, int *b){

    int ueum;

    ueum = *a;
    *a = *b;
    *b = ueum;
}

int main(){

    int numA, numB;

    scanf("%d %d",&numA, &numB);

    printf("a: %d b: %d\n",numA,numB);

    troca(&numA,&numB);

    printf("a: %d b: %d\n",numA,numB);

    return 0;

}