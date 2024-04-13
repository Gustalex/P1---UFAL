#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double tempf, tempc;

    scanf("%lf",&tempf);

    tempc = (tempf - 32)*5/9;
    
    printf("%.2lf", tempc);
    
    return 0;
}