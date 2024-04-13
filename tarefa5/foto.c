#include <stdio.h>
void swap(double *a, double *b){

    double aux = *a;
    *a = *b;
    *b = aux;
}
void ordem(double alturas[], int index){

    if(index <= 0) return;

    else{

        if(alturas[0] > alturas[1]) swap(&alturas[0],&alturas[1]);

        if(alturas[1] > alturas[2]) swap(&alturas[1],&alturas[2]);
        
        if(alturas[2] > alturas[3]) swap(&alturas[2],&alturas[3]);

    }

    ordem(alturas,index - 1);
}
void loop(double alturas[], int index){

    if(index == 4) return;

    scanf("%lf",&alturas[index]);
    
    loop(alturas, index + 1);

}
int main(){

    double alturas[4];

    loop(alturas, 0);

    ordem(alturas, 3);

    printf("%.2lf\n",alturas[0]);
    printf("%.2lf\n",alturas[2]);
    printf("%.2lf\n",alturas[3]);
    printf("%.2lf\n",alturas[1]);
    
}