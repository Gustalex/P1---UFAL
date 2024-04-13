#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double a, b, c;
    double media;
    
    scanf("%lf %lf %lf",&a,&b,&c);

    media = ((a*2)+(b*3)+(c*5))/10;
    
    printf("MEDIA = %.1lf", media);
    
    return 0;
}