#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int zero(int arr[], int arr2[], int indexatu, int n, int troca) {
    if (indexatu == n)
    {
        verify(arr, arr2, n, n, troca);
    }
    else
    {
        if (arr2[indexatu] == 0) verify(arr, arr2, indexatu, n, troca);
            
        else zero(arr, arr2, indexatu + 1, n, troca);
    }
}

int verify(int arr[], int arr2[], int indexatu, int n, int troca) {
    if (indexatu == n) {
        printf("%d\n", troca);
    }
    else
    {
        if (arr2[indexatu] != 1)
        {
            arr2[indexatu] = 1;
            indexatu = arr[indexatu];
            verify(arr, arr2, indexatu, n, troca);
        }
        else
        {
            troca++;
            zero(arr, arr2, 0, n, troca);
        }
    }
}

int scan(int arr[], int arr2[], int indexatu, int n) {
    if (indexatu == n) {
        verify(arr, arr2, 0, n, 0);
    }
    else
    {
        scanf("%d", &arr[indexatu]);
        arr2[indexatu] = 0;
        return scan(arr, arr2, indexatu + 1, n);
    }
}

int main() {
  
    int n;
   
    scanf("%d", &n);
   
    int arr[n], arr2[n];
   
    scan(arr, arr2, 0, n);
   
    return 0;
}
