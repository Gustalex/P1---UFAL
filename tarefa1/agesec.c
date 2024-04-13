#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int idade;
    int agesec;

    scanf("%d",&idade);

    agesec = idade*(365*24*60*60);

    printf("%d",agesec);

    return 0;
}