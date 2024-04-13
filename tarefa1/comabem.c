#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double gasto, garcom;

    scanf("%lf", &gasto);

    garcom = gasto+(gasto * 0.1);
    
    printf("%.2lf", garcom);
    
    
    return 0;
}