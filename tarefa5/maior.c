#include <stdio.h>

int maiornum(int maior){
    
    int num;
    scanf("%d",&num);

    if(num == 0) return maior;

    else
    {
        if(num > maior) return maiornum(num);

        else return maiornum(maior);
    } 

}

int main(){

    int maior = 0;

    maior = maiornum(maior);

    printf("%d\n",maior);

    return 0;
}