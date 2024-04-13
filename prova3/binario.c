#include <stdio.h>

void printarsoma(int somatorio[], int tamanho, int index) 
{
    if (index <= tamanho)
    {
       printf("%d ", somatorio[index]);

       printarsoma(somatorio, tamanho, index + 1);
    }
}

void sumarr(int numero1[], int numero2[], int tamanho, int somatorio[], int index, int vaium) 
{
    if (index < 0)
    {
        somatorio[0] = vaium;
        return;
    }

    int soma = numero1[index] + numero2[index] + vaium;
    
    somatorio[index + 1] = soma % 2;

    vaium = soma / 2;

    sumarr(numero1, numero2, tamanho, somatorio, index - 1, vaium);
}


void ler(int arr[], int tamanho, int index) 
{
    if (index < tamanho)
    {
        scanf("%d", &arr[index]);
        
        ler(arr, tamanho, index + 1);
    }
}

int main() {
    
    int numdig;
    scanf("%d", &numdig);

    int numero1[numdig];
    int numero2[numdig];
    int result[numdig + 1];

    ler(numero1, numdig, 0);
    ler(numero2, numdig, 0);

    sumarr(numero1, numero2, numdig, result, numdig - 1, 0);

    if (result[0] == 1) printf("OVERFLOW\n");

    else
    {
        printarsoma(result, numdig, 1); 
        printf("\n");
    }

    return 0;
}