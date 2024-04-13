#include <stdio.h>

void multa(int a, double *contcarr, int *contcasas){

    if(a == 999) return;

    int num;
    scanf("%d",&num);

    if(num > 2)
    {
        *contcarr += (num - 2);
        *contcasas += 1;
    }

    multa(num,contcarr,contcasas);
}

int main(){

    double numcar = 0;
    int numcasa = 0;

    multa(0,&numcar,&numcasa);

    double total = (numcar - 997) * 12.89;

    printf("%.2lf\n",total);
    printf("%d\n",numcasa - 1);

    return 0;
}