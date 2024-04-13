#include <stdio.h>


int calcaps(int prof, int totalcaps) {
    if (prof == 0)
    {
        printf ("%d\n",totalcaps);
        printf ("%d\n",(totalcaps*2)/7);
    }
    
    else{

        int quancaixas,capsulas;
        char tamanho;
        scanf("%d %c", &quancaixas, &tamanho);
    
     if (tamanho == 'p' || tamanho == 'P') calcaps(prof - 1, totalcaps += quancaixas* 10);

     else calcaps(prof - 1, totalcaps += quancaixas * 16);
        
    }

}

int main() {

    calcaps(7,0);

    return 0;
}
