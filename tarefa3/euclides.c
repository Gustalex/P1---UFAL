#include <stdio.h>

int mdce(int numA, int numB) {
    if (numB == 0)
        return numA;
    return mdce(numB, numA % numB);
}

void repeteucl(int numcasos) {
   
    if (numcasos <= 0) return 0; 
        
    int num1, num2;
    scanf("%d %d", &num1, &num2);  

    int mdc = mdce(num1, num2);  

    printf("MDC(%d,%d) = %d\n", num1, num2, mdc);  

    repeteucl(numcasos - 1);  
}
int main() {
    int numcasos;
    scanf("%d", &numcasos);

    repeteucl(numcasos);  

    return 0;
}
