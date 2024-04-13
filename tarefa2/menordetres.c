#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int menorde3(int x, int y, int z){

    int menor = x;

    if(x<y && x<z)
    {
        menor = x;
    }
    if (y<z && y<x)
    {
        menor = y;
    }
    if (z<x && z<y)
    {
        menor = z;
    }
    if (x == y && x < z)
    {
        menor = x;
    }
    if (z == x && z < y)
    {
        menor = z;
    }
    if (y == z && y < x)
    {
        menor = y;
    }
    

    return menor;
}

int main() {
	
    int a, b, c, result;

    scanf("%d %d %d",&a,&b,&c);


    result = menorde3(a,b,c);

    printf("%d\n",result);

    return 0;
}