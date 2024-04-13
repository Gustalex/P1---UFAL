#include <stdio.h>
 
void scan(int array[], int i, int n)
{
    if(i == n) return;
    
    scanf("%d", &array[i]);
    
    scan(array, i+1, n);
}
 
int frequencia(int array[], int i, int tam, int FrequenciaAtual, int maiorFrequencia, int anterior)
{
    if(i == tam)
    {
        return maiorFrequencia;
    }
    
    if(array[i] == anterior)
    {
        FrequenciaAtual = 1;
    }
    else
    {
        FrequenciaAtual++;
    }
    
    if(FrequenciaAtual > maiorFrequencia)
    {
        maiorFrequencia = FrequenciaAtual;
    }
    
    anterior = array[i];
    
    return frequencia(array, i+1, tam, FrequenciaAtual, maiorFrequencia, anterior);
}
 
void bits(int n, int maiorFrequencia)
{
    if(n == 0)
    {
        printf("%d", maiorFrequencia);
        return;
    }
    
    int tam;
    scanf("%d", &tam);
    int array[tam];
    scan(array, 0, tam);
    
    int novaFrequencia = frequencia(array, 0, tam, 0, maiorFrequencia, 0);
    
    if(maiorFrequencia < novaFrequencia)
    {
        maiorFrequencia = novaFrequencia;
    }
    
    bits(n-1, maiorFrequencia);
}
 
int main() {
    
    int n;
    scanf("%d", &n);
    bits(n, 0);
    
    return 0;
}