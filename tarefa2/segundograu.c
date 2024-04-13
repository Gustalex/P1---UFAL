#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double a, b, c, delta, x1, x2;

    scanf("%lf %lf %lf",&a, &b, &c);
    
    delta = (b*b) - 4 * a * c ;

    x1 = (-b + sqrt(delta))/(2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);
    
    if (a == 0) 
    {
        printf("NEESG");
        return 0;
    }
    
    if (delta < 0) 
    {
        printf("NRR");
        return 0;
    }
    
    else printf("%.2lf\n%.2lf",x1,x2);


    
    return 0;
}