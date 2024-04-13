#include <stdio.h>

int mult(int num, int divisor) {
    return num % divisor == 0;
}

void checkmult(int n, int a, int b, int *reslt) {
    if (a > b) {
        if (*reslt == 0) {
            printf("INEXISTENTE\n");
        }
        return;
    }

    if (mult(a, n)) {
        printf("%d\n", a);
        *reslt = 1;
    }
    
    checkmult(n, a + 1, b, reslt);
}

void printmult(int n, int a, int b) {
    int reslt = 0; 

    checkmult(n, a, b, &reslt);
}

int main() {
    int numN, numA, numB;

    scanf("%d %d %d", &numN, &numA, &numB);

    printmult(numN, numA, numB);

    return 0;
}
