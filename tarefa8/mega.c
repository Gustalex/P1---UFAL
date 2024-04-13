#include <stdio.h>
#include <string.h>
 
void lermatriz(int numcol, int numlinha, int matriz[numlinha][numcol]) {
 
    for (int i = 0; i < numlinha; i++) {
        for (int j = 0; j < numcol; j++) {
            int num;
            char carac;
            scanf("%d", &num);
            scanf("%c", &carac);
 
            if (carac == ',') matriz[i][j] = num;
 
            else if (carac == '\n')
            {
                matriz[i][j] = num;
                break; 
            }
        }
    }
}
int contganha(int numcol, int numlinha, int matriz[numlinha][numcol], int array[6]) {

    int cont_ganhador = 0;

    for(int i = 0; i< numlinha ; i++){
        int contador = 0;
        for(int j = 0; j < numcol; j++){
            for(int k = 0; k < 6; k++){
                if(matriz[i][j] == array[k]) contador++;
            }
        }
        if(contador == 6) cont_ganhador++;
    }

    return cont_ganhador;
}
void lerarr(int array[6]){
    for (int i = 0; i < 6; i++) scanf("%d", &array[i]);
}
int main() {
    int n;
    scanf("%d", &n);
 
    int matriz[n][10];
    memset(matriz, 0, sizeof(matriz));
 
    lermatriz(10, n, matriz);
 
    int numeros[6];
    lerarr(numeros);
 
    int contador = contganha(10, n, matriz, numeros);
 
    printf("Total de ganhadores: %d\n", contador);
 
 
    return 0;
}