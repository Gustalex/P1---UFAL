#include <stdio.h>

int contdiv(int num, int divisor) {
    if (divisor == 0) {
        return 0;
    }

    if (num % divisor == 0 && divisor % 3 == 0) {
        return 1 + contdiv(num, divisor - 1);
    } else {
        return contdiv(num, divisor - 1);
    }
}
int main() {
    int Num;

    scanf("%d", &Num);

    int qtd = contdiv(Num, Num);

    if (qtd > 0) {
        printf("%d\n",qtd);
    } else {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }

    return 0;
}
