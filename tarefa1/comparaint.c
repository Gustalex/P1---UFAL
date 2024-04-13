#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int verdadeiro, falso, num1, num2;

    scanf("%d %d",&num1, &num2);

    verdadeiro = 1;
    falso = 0;

    if (num1 > num2) printf("%d\n", verdadeiro);
    else printf("%d\n", falso);

    if (num1 == num2) printf("%d\n", verdadeiro);
    else printf("%d\n", falso);

    if (num1 < num2) printf("%d\n", verdadeiro);
    else printf("%d\n", falso);

    if (num1 != num2) printf("%d\n", verdadeiro);
    else printf("%d\n", falso);

    if (num1 >= num2) printf("%d\n", verdadeiro);
    else printf("%d\n", falso);

    if (num1 <= num2) printf("%d\n", verdadeiro);
    else printf("%d\n", falso);
    
    
    
    
    
    return 0;
}