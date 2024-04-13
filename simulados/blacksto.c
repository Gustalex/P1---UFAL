
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void zera_array(int array[], int i, int n)
{
    if (i == n) return;
    
    array[i] = 0;
    
    zera_array(array, i + 1, n);
}
 
void incrementar(int array[], int a, int b)
{
    if (a > b) return;
    
    array[a]++;
    
    incrementar(array, a + 1, b);
}
 
int maior_valor_do_array(int array[], int i, int n, int maior_valor)
{
    if (i == n) return maior_valor;
    
    if (array[i] > maior_valor) maior_valor = array[i];
    
    return maior_valor_do_array(array, i + 1, n, maior_valor);
}
 
void loop(int array[], int k)
{
    if (k == 0) return;
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    incrementar(array, a, b);
    
    loop(array, k - 1);
}
 
int encontrar_final(int array[], int i, int n, int maior_valor)
{
    if (i == n)
    {
        return i - 1;
    }
    
    if (array[i] != maior_valor)
    {
        return i - 1;
    }
    else
    {
        return encontrar_final(array, i + 1, n, maior_valor);
    }
}
 
void encontrar_sequencias(int array[], int i, int n, int maior_valor, int coordenadas[])
{
    if (i == n) return;
    
    if (array[i] == maior_valor)
    {
        int fim = encontrar_final(array, i, n, maior_valor);
        
        printf("%d %d\n", i, fim);
        
        if (fim - i + 1 > coordenadas[1] - coordenadas[0] + 1)
        {
            coordenadas[0] = i;
            coordenadas[1] = fim;
        }
        
        encontrar_sequencias(array, fim + 1, n, maior_valor, coordenadas);
    }
    else
    {
        encontrar_sequencias(array, i + 1, n, maior_valor, coordenadas);
    }
}
 
void printar_array(int array[], int i, int n)
{
    if (i == n) return;
    
    printf("%d%c", array[i], i + 1 == n ? '\n' : ' ');
    
    printar_array(array, i + 1, n);
}
 
int main() {
    int n, testemunhas, maior_valor, coordenadas[2] = {0, -1};
    scanf("%d %d", &n, &testemunhas);
    int array[n];
    
    zera_array(array, 0, n);
    
    loop(array, testemunhas);
    maior_valor = maior_valor_do_array(array, 0, n, -1);
    
    printar_array(array, 0, n);
    
    printf("%d\n", maior_valor);
    
    encontrar_sequencias(array, 0, n, maior_valor, coordenadas);
    
    printf("maior sequencia: %d\n", coordenadas[1] - coordenadas[0] + 1);
    printf("comeca em: %d\n", coordenadas[0]);
    printf("termina em: %d\n", coordenadas[1]);
 
    return 0;
}