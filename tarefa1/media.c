#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    double notaa, notab,media;
    
    scanf("%lf %lf",&notaa, &notab);

    media = ((notaa*3.5)+(notab*7.5))/11;

    printf("MEDIA = %.5lf", media);
    
    
    return 0;
}