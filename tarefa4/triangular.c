#include <stdio.h>

int triangular(int n, int a, int b, int c) {
    if (a * b * c == n) {
        printf("%d * %d * %d = %d\nVerdadeiro\n", a, b, c, n);
        return 1;
    }

    if (a * b * c > n) {
        printf("Falso\n");
        return 0;
    }

    return triangular(n, a + 1, b + 1, c + 1);
}

int main() {
    int num;

    scanf("%d", &num);

    triangular(num, 1, 2, 3);

    return 0;
}
