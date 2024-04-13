#include <stdio.h>

int primo(int x, int divisor) {
    
    if (divisor <= 1) return 1;
    
    if (x % divisor == 0)   return 0;
      
    return primo(x, divisor - 1);
}

int proxprimo(int y) {
    if (primo(y, y - 1)) {
        return y;
    }

    return proxprimo(y + 1);
}

int fatorial(int z) {
    if (z <= 1) {
        return 1;
    }

    return z * fatorial(z - 1);
}

void printserie(int termoatu, int numtermos, double *soma) {
    if (numtermos == 0) {
        printf("\n%.2lf\n", *soma);
        return;
    }

    int f = fatorial(termoatu);
    int primo = proxprimo(termoatu);
    double resultado_termo = (double)f / primo;

    printf("%d!/%d", termoatu, primo);

    if (numtermos > 1) {
        printf(" + ");
    }

    *soma += resultado_termo;

    printserie(termoatu + 1, numtermos - 1, soma);
}
int main() {
    
    int n;
    scanf("%d", &n);

    double soma = 0.0;
    printserie(1, n, &soma);

    return 0;
}
