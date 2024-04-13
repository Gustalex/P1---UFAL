#include <stdio.h>
#include <string.h>

void transposta(int linhas, int colunas, int matriz[linhas][colunas]){
    int matrizt[colunas][linhas];
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matrizt[j][i] = matriz[i][j];
        }
    }
    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            printf("%d ",matrizt[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int linhas,colunas;
    scanf("%d%d",&linhas,&colunas);
    
    int matriz[linhas][colunas];
    memset(matriz, 0, sizeof(matriz));
    
    transposta(linhas,colunas,matriz);


    return 0;
}