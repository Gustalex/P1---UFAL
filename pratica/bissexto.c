#include <stdio.h>

int bissexto(int anoX){
    if (anoX % 4 == 0 && anoX % 100 != 0)
    {
        return 1;

        if(anoX%100 == 0 && anoX % 400 != 0) return 1;
    }
    else return 0;
}

int main(){

    int ano;

    scanf("%d",&ano);

    int resbiss = bissexto(ano);

    if (resbiss == 1) printf("Bissexto\n");
    else printf("Nao bissexto\n");

    return 0;
}