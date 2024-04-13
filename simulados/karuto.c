#include <stdio.h>
 
int scan(int inimigos[], int n, int i)
{
    if(i == n) return;
    
    scanf("%d", &inimigos[i]);
    
    return scan(inimigos, n, i+1);
}
 
int luta(int poder, int inimigos[], int n, int i, double derrotados, double total)
{
    if(n == 0)
    {
        printf("Nível de energia: %d\n%.2lf%%\n", poder, (derrotados/total)*100);
        if(poder > 20000)
        {
            printf("Marquinhos é o novo Mestre da Vila da Árvore!");
        }
        else
        {
            printf("Continue tentando!");
        }
        return;
    }
    
    scanf("%d", &i);
    
    if(poder >= inimigos[i-1])
    {
        poder += poder - inimigos[i-1];
        derrotados++;
    }
    
    //printf("%d\n", inimigos[i-1]);
    //printf("N�vel de Energia: %d\n", poder);
    
    return luta(poder, inimigos, n-1, 0, derrotados, total);
}
 
int main() {
    
    int poder, n;
    
    scanf("%d %d", &poder, &n);
    
    int inimigos[n];
    
    scan(inimigos, n, 0);
    luta(poder, inimigos, n, 0, 0, n);
    
    
    return 0;
}