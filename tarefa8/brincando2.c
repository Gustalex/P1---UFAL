#include <stdio.h>
double somarmatriz(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
    double soma = 0;
    
    for(int i = 0; i < numlinha; i++){
        for(int j = 0; j < numcol; j++){

            soma += matriz[i][j];
        }
    }
    return soma;
}
void lermatriz(int numcol, int numlinha, int matriz[numlinha][numcol]) {

    for (int i = 0; i < numlinha; i++) {
        for (int j = 0; j < numcol; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}
double somarpares(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
    double soma = 0;
    
    for(int i = 0; i < numlinha; i++){
        for(int j = 0; j < numcol; j++){

            if(matriz[i][j] > 0) soma += matriz[i][j];
        }
    }
    return soma;
}
double contapos(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
    double contador = 0;
    
    for(int i = 0; i < numlinha; i++){
        for(int j = 0; j < numcol; j++){

            if(matriz[i][j] > 0) contador++;
    }
}
    return contador;
}
int menorvalor(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
    int menor = matriz[0][0];

    for(int i = 0; i < numlinha; i++){
        for(int j = 0; j < numcol; j++){

            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}
double somadiagonal(int numcol, int numlinha, int matriz[numlinha][numcol]){
    
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

    double contador = contapos(3, 3, matriz);

    double somapar = somarpares(3, 3, matriz);
    double media = somapar/contador;
    
    
    int menor = menorvalor(3, 3, matriz);
    
    int delta;
    if(menor%2 == 0) delta = 1;
    else delta = 0;

    double soma = somarmatriz(3, 3, matriz);
    double somaa_diagnal = somadiagonal(3, 3, matriz);

    double soma2 = soma - somaa_diagnal;

    printf("%.2lf ",media);
    printf("%d ",menor);
    printf("%d ",delta);
    printf("%.0lf ",soma2);


    return 0;
}