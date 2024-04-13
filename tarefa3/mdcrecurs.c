#include <stdio.h>
int mdc(int numA, int numB) {
    if (numB == 0)
        return numA;
    return mdc(numB, numA % numB);
}

int main(){

    int num1, num2, resultmdc;

    scanf("%d %d",&num1,&num2);

    resultmdc = mdc(num1,num2);
    printf("%d",resultmdc);

    return 0;
}