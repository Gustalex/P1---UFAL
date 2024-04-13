#include <stdio.h> 

int somapar(int a){

    if(a <= 0) return 0;
    
    else
    {
        int proxdig = a % 10;
                                    
        if(proxdig % 2 == 0)
        {
            return proxdig + somapar((a - proxdig)/10); /* A expressão (a - proxdigit), n é necessaria nesse caso por se tratarem de numeros inteiros,
                                                        mas no caso de termos variaveis tipo double seria de crucual importancia para a questão.*/
        }
        else
        {
            somapar((a - proxdig)/10);      
        }
    }
}
int somaimpar(int b){


    if(b <= 0) return 0;
    
    else
    {
        int proxdig = b % 10;

        if(proxdig % 2 == 1)
        {
            return proxdig + somaimpar((b - proxdig)/10);
        }
        else
        {
            somaimpar((b - proxdig)/10);
        }
    }
}
int main(){

    int num;

    scanf("%d",&num);

    int resultpar = somapar(num);
    int resultimpar = somaimpar(num);

    printf("%d\n",resultimpar);
    printf("%d\n",resultpar);

if(resultimpar == resultpar) printf("Empate\n");

    else if(resultpar>resultimpar)
    {
        printf("Vencedor: Dunga\n");
        printf("%d Pontos de Vantagem\n",resultpar - resultimpar);
    }
    else
    {
        printf("Vencedor: Nando\n");
        printf("%d Pontos de Vantagem\n",resultimpar - resultpar);
    }

    return 0;
}