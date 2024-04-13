#include <stdio.h>
#include <stdbool.h>

int arr(int figu[], int i, int tam, int aux)
{
    if(i == tam - 1) return false;

    else
    {
        if(figu[i] == aux) return true;

        return arr(figu, i+1, tam, aux);
    }
}

void figurinhas(int figu[], int i, int tam, int contJ, int contM, int somaJ, int somaM, int figuj[], int figum[])
{
    if(i == tam)
    {
        if(somaJ > somaM) printf("%d\n%d\n%d\n", contJ, contM, somaJ);
    
        else printf("%d\n%d\n%d\n", contJ, contM, somaM);

        return;
    }
    else
    {
        scanf("%d", &figu[i]);

        if(figu[i] % 2 == 0)
        {
            if(arr(figuj, 0, tam, figu[i]) == false)
            {
                contJ++;
                figuj[i] = figu[i];
                somaJ += figu[i];
            }
            else contJ++;
        }
        else
        {
            if(arr(figum, 0, tam, figu[i]) == false)
            {
                contM++;
                figum[i] = figu[i];
                somaM += figu[i];
            }
            else contM++;
               
        }
    }

    return figurinhas(figu, i+1, tam, contJ, contM, somaJ, somaM, figuj, figum);
}


int main()
{
    int n;
    scanf("%d", &n);

    int figu[n];
    int figuj[n], figum[n];

    figurinhas(figu, 0, n, 0, 0, 0, 0, figuj, figum);

    return 0;
}