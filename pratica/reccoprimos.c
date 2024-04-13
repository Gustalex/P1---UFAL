#include <stdio.h>

int mdce(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdce(b, a % b);
}

int coprimo(int a, int b) {
    return mdce(a, b) == 1;
}

int main() {
    int num1, num2;

    
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (coprimo(num1, num2)) {
        printf("%d e %d sao primos entre si\n", num1, num2);
    } else {
        printf("%d e %d nao sao primos entre si\n", num1, num2);
    }

    return 0;
}
