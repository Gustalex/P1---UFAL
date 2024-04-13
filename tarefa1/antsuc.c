#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, ant, suc;
    
    scanf("%d",&n);

    ant = n-1;
    suc = n+1;

    printf("%d %d", ant, suc);
    
    return 0;
}