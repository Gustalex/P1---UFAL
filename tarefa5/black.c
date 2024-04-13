#include <stdio.h>

int calc(double preco1, double preco2) {
    
    if (preco2 <= preco1 * 0.80) return 1;

    else return 0;
    
}

void loop(double num, int *cont) {

    if (num <= 0) {
        return;
    }
    
    double valor1, valor2;
    scanf("%lf %lf", &valor1, &valor2);
    
    int rescalc = calc(valor1,valor2);

    if(rescalc == 1) *cont += 1;

    loop(num - 1,cont);
}

int main() {
    
    int contador = 0;

    loop(5, &contador);

    printf("%d\n",contador);

    return 0;
}
