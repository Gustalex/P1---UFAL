#include <stdio.h>

int calc(int leituras, int capacidade, int capmax) {
    
    if (leituras <= 0) {
        return 0; 
    }

    int entrada, saida;
    scanf("%d %d", &saida, &entrada);

    capacidade = capacidade - saida + entrada;

    if (capacidade > capmax) {
        return 1; 
    }

    return calc(leituras - 1, capacidade, capmax);
}

int main() {

    int capmax, leituras;

    scanf("%d %d", &leituras, &capmax);

    int resultado = calc(leituras, 0, capmax);

    if (resultado == 1) printf("S\n");
        
    else printf("N\n");

    return 0;
}
