#include <stdio.h>

int ContaDigitosPares(int num, int contador) {
    if (num == 0)
        return contador;
    else {
        if (num % 2 == 0)
            contador++;
        return ContaDigitosPares(num / 10, contador);
    }
}

int main() {
    int cont = 0;
    int numero, result;
    scanf("%d", &numero);

    result = ContaDigitosPares(numero, cont);

    printf("%d\n", result);

    return 0;
}
