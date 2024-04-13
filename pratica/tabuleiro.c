#include <stdio.h>
 
void solve(int colunas, int linhas, int matriz[linhas][colunas], char string[], int x, int y, int XFinal, int YFinal, int movimentos, int cont)
{
    if(x == XFinal && y == YFinal)
    {
        printf("Cheguei com %d movimentos", cont);
        return;
    }
    
    if(cont > movimentos)
    {
        printf("Nao cheguei");
        return;
    }
    
    if(string[cont] == 'C' && y > 0)
    {
        if(matriz[x-1][y] > 0)
        {
            matriz[x-1][y] -= 1;
        }
        else
        {
            x--;
        }
    }
    
    else if(string[cont] == 'B' && y < colunas)
    {
        if(matriz[x+1][y] > 0)
        {
            matriz[x+1][y] -= 1;
        }
        else
        {
            x++;
        }
    }
    
    else if(string[cont] == 'D' && x < linhas)
    {
        if(matriz[x][y+1] > 0)
        {
            matriz[x][y+1] -= 1;
        }
        else
        {
            y++;
        }
    }
    
    else if(string[cont] == 'E' && x > 0)
    {
        if(matriz[x][y-1] > 0)
        {
            matriz[x][y-1] -= 1;
        }
        else
        {
            y--;
        }
    }
    
    return solve(colunas, linhas, matriz, string, x, y, XFinal, YFinal, movimentos, cont+1);
}
 
int main() {
    
    int linhas, colunas, movimentos, XFinal, YFinal;
    scanf("%d%d", &linhas, &colunas);
    
    int matriz[linhas][colunas];
    
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    scanf("%d", &movimentos);
    
    char string[movimentos];
    
    for(int i = 0; i < movimentos; i++)
    {
        scanf(" %c", &string[i]);
    }
    
    scanf("%d%d", &XFinal, &YFinal);
    
    solve(colunas, linhas, matriz, string, 0, 0, XFinal, YFinal, movimentos, 0);
    
    return 0;
}
