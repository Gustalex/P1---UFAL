#include <stdio.h>

void lermatriz(int numcol, int numlinha, int matriz[numlinha][numcol]) {
    
    for (int i = 0; i < numlinha; i++) {
        for (int j = 0; j < numcol; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}
double somarmatriz(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
    double soma = 0;

    for(int i = 0; i < numlinha; i++){
        for(int j = 0; j < numcol; j++){

            soma += matriz[i][j];
        }
    }
    return soma;
}
int maiorvalor(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
    int maior = matriz[0][0];

    for(int i = 0; i < numlinha; i++){
        for(int j = 0; j < numcol; j++){

            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}
int somadiagonal(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
    int soma = 0;

    for(int i = 0; i < numlinha; i++){
        for(int j = 0; j < numcol; j++){

            if(i == j){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int main(){

    int matriz[3][3];

    lermatriz(3, 3, matriz);
    double soma = somarmatriz(3, 3, matriz);

    double media = soma/ 9;
    
    int maior = maiorvalor(3, 3, matriz);

    int delta;

    if(maior > 0) delta = 1;
    else if(maior < 0) delta = -1;
    else delta = 0;

    int somdiag = somadiagonal(3, 3, matriz);

    printf("%.2lf %d %d %d", media, maior, delta, somdiag);

    
    return 0;
}