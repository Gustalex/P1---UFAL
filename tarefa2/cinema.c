#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int est, idos;

    scanf("%d %d", &est, &idos);


    if (est == 0 && idos == 0) printf("0");

    else if (est == 1 && idos == 0) printf("1");
    
    else if (est == 1 && idos == 1) printf("1");

    else if (est == 0 && idos == 1) printf("1");

    
    return 0;
}