#include <stdio.h>

double repeticao(int n, int i, double soma, double nump, double numi){
    
    if(n == i-1 ) return soma;
    
    if(i % 2 != 0)
    {
        double decii=i;

        soma = soma + (decii/nump);

        return repeticao(n, i+1, soma, nump*2, numi);
    }
    else
    {
        soma = soma + (nump / numi);
        
        return repeticao(n, i+1, soma, nump*2, numi+3);
    }
}

int main(){
    
    int num;
    scanf("%d", &num);

    double result = repeticao(num, 1, 0, 1, 3);

    printf("S: %.2lf\n", result);

    return 0;
}