#include <stdio.h>
#include <string.h>

#define DIGIMAXIMO 10001

void soma(char M[], char N[], char resultado[]){
    
    int i, j, k, vaium = 0, soma;
    int tmnM = strlen(M);
    int tmnN = strlen(N);
    int tmnmax;

    if(tmnN > tmnM) tmnmax = tmnN;
    else tmnmax = tmnM;

    for (i = tmnM - 1, j = tmnN - 1, k = tmnmax - 1; k >= 0; i--, j--, k--){
        
        soma = vaium;

        if (i >= 0) soma += M[i] - '0';
            
        if (j >= 0) soma += N[j] - '0';
     
        resultado[k] = (soma % 10) + '0';
        
        vaium = soma / 10;
    }
    if (vaium > 0){

        resultado[tmnmax] = vaium + '0';
        resultado[tmnmax + 1] = '\0';

    }
    else resultado[tmnmax] = '\0';
       
}

int main() {

    char M[DIGIMAXIMO], N[DIGIMAXIMO];
    scanf("%s", M);
    scanf("%s", N);

    char resultado[DIGIMAXIMO + 1]; 
    soma(M, N, resultado);

    printf("%s\n", resultado);

    return 0;
}
