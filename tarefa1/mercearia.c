#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int codigo, quantidade;
    double total;

    scanf("%d",&codigo);
    scanf("%d",&quantidade);


    if (codigo == 1) total = quantidade * 5.30;

    else if (codigo == 2) total = quantidade * 6.00;

    else if (codigo == 3) total = quantidade * 3.20;

    else if (codigo == 4) total = quantidade * 2.50;

    if (quantidade >= 15 || total >= 40) total = total * 0.85;
    
    printf("R$ %.2lf\n",total);
    

return 0;
}