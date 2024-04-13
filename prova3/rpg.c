#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int printar(int arr1[], int arr2[], int cont){
    if(cont != 6){
        int num;
        scanf("%d", &num);

        arr2[cont] = num - 1;

        printar(arr1, arr2, cont+1);
    }
    else{
        printf("For = %d\n", arr1[arr2[0]]);
        printf("Des = %d\n", arr1[arr2[1]]);
        printf("Con = %d\n", arr1[arr2[2]]);
        printf("Sab = %d\n", arr1[arr2[3]]);
        printf("Int = %d\n", arr1[arr2[4]]);
        printf("Car = %d\n", arr1[arr2[5]]);
    }
}

int soma(int arr[], int tamanho) {
    if (tamanho == 0)
        return 0;
    else
        return arr[tamanho - 1] + soma(arr, tamanho - 1);
}

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void ordem(int arr[], int index) {
    if (index <= 0)
        return;
    else
    {
        if (arr[0] >= arr[1]) swap(&arr[0], &arr[1]);
           
        if (arr[1] >= arr[2]) swap(&arr[1], &arr[2]);
           
        if (arr[2] >= arr[3]) swap(&arr[2], &arr[3]);
           
    }
    ordem(arr, index - 1);
}

void ordem2(int arr[], int index) {
    if (index <= 0)
        return;
    else
    {
        if (arr[0] <= arr[1]) swap(&arr[0], &arr[1]);
           
        if (arr[1] <= arr[2]) swap(&arr[1], &arr[2]);
           
        if (arr[2] <= arr[3]) swap(&arr[2], &arr[3]);
        
        if (arr[3] <= arr[4]) swap(&arr[3], &arr[4]);

        if (arr[4] <= arr[5]) swap(&arr[4], &arr[5]);
           
    }
    ordem2(arr, index - 1);
}

void lerdados(int valdados[], int index) {
    if (index == 4) return;
     
    else scanf("%d", &valdados[index]);
   
    lerdados(valdados, index + 1);
}

int main() {
    int atributo1[4];

    lerdados(atributo1, 0);
    ordem(atributo1, 4);
    memset(&atributo1[0], 0, sizeof(atributo1[0]));

    int resum1 = soma(atributo1, 4);

    int atributo2[4];

    lerdados(atributo2, 0);
    ordem(atributo2, 4);
    memset(&atributo2[0], 0, sizeof(atributo2[0]));

    int resum2 = soma(atributo2, 4);

    int atributo3[4];

    lerdados(atributo3, 0);
    ordem(atributo3, 4);
    memset(&atributo3[0], 0, sizeof(atributo3[0]));

    int resum3 = soma(atributo3, 4);

    int atributo4[4];

    lerdados(atributo4, 0);
    ordem(atributo4, 4);
    memset(&atributo4[0], 0, sizeof(atributo4[0]));

    int resum4 = soma(atributo4, 4);

    int atributo5[4];

    lerdados(atributo5, 0);
    ordem(atributo5, 4);
    memset(&atributo5[0], 0, sizeof(atributo5[0]));

    int resum5 = soma(atributo5, 4);

    int atributo6[4];

    lerdados(atributo6, 0);
    ordem(atributo6, 4);
    memset(&atributo6[0], 0, sizeof(atributo6[0]));

    int resum6 = soma(atributo6, 4);

    int somas[6] = {resum1, resum2, resum3, resum4, resum5, resum6};
    ordem2(somas, 6);
    
    int sequencia[6];
    printar(somas, sequencia, 0);
    
 
    return 0;
}
