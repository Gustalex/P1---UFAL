#include <stdio.h>

double reduz(double *x, double *y) {
    
    double numx = *x;
    double numy = *y;
    double red = numx - numy;
    return red;
}

int main() {
    double numX, numY;

    scanf("%lf %lf", &numX, &numY);

    double result = reduz(&numX, &numY);

    printf("%.2lf %.2lf\n", result, numY);

    return 0;
}
