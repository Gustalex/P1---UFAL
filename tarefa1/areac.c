#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double pi = 3.14159;
    double raioc, raiom;
    double area;

    scanf("%lf", &raioc);

    raiom = raioc/100;

    area = pi * raiom * raiom;

    printf("Area = %.4lf", area);
    

    return 0;
}