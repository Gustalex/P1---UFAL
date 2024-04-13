    #include <stdio.h>

    int main(){

        int x, y;
        scanf("%d %d", &x, &y);

        if(y % x == 0){
        
            int matriz[y/x][x];

            int cont = 1;

            for(int i = 0; i < y/x; i++){
                for(int j = 0; j < x; j++){
                    matriz[i][j] = cont++; 
                }
            }
            for(int i = 0; i < y/x; i++){
                for (int j = 0; j < x; j++)
                {
                    if(j == x - 1)
                        printf("%d", matriz[i][j]);
                    else
                        printf("%d ", matriz[i][j]);   
                }
                printf("\n");
            }
        }
        else{
            
            int matriz[y/x + 1][x];

            int cont = 1;

            for(int i = 0; i < y/x + 1; i++){
                for(int j = 0; j < x; j++){
                    matriz[i][j] = cont++; 
                }
            }
            for(int i = 0; i < y/x + 1; i++){
                for (int j = 0; j < x; j++)
                {
                    if (matriz[i][j] <= y){
                        if(j == x - 1)
                            printf("%d", matriz[i][j]);
                        else
                            printf("%d ", matriz[i][j]);
                    }
                }
                printf("\n");
            }
        }

        return 0;
    }