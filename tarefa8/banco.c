#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void opera(double matriz[][2], int n) {
    double soma = 0, sub = 0;

    for (int i = 0; i < n; i++) {
        if (matriz[i][0] == 1)
            soma += matriz[i][1];
        else if (matriz[i][0] == 0)
            sub += matriz[i][1];
    }
   
    printf("Creditos: R$ %.2lf\n", soma);
    printf("Debitos: R$ %.2lf\n", sub );
    printf("Saldo: R$ %.2lf\n", soma - sub);
}
void lermatriz(double matriz[][2], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%lf", &matriz[i][0]);
        if(matriz[i][0] == -1) break;
        else scanf("%lf", &matriz[i][1]);
    }
}
int main(){

    double matriz[100][2];
    memset(matriz, 0, sizeof(matriz));
    lermatriz(matriz, 100);
    opera(matriz, 100);
    
    return 0;
}