#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
   
    double x ,y, z;
    
scanf("%lf %lf %lf",&x, &y,&z);


    if (x==y && x==z) printf("equilatero\n");

    else if (x==y || x==z || z==y) printf("isosceles\n");

    else printf("escaleno\n");

    return 0;
}