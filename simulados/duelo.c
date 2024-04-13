#include <stdio.h>

double duelo(double dano, double vida){

    double vidainim, danocausado;

    vidainim = vida - dano;
    danocausado = dano;

    if (vidainim <= 0)
    {
        printf("Personagem 1 venceu\n");
        printf("Dano causado: %.2lf",danocausado);
    }

    else
    {
        printf("Personagem 2 venceu\n");
        printf("Vida restante: %.2lf",vidainim);
    }

    return 0;
}


int main (){

    double nivel1, dano1, nivel2, vida2, treta;

    scanf("%lf %lf %lf %lf",&nivel1,&dano1,&nivel2,&vida2);

    if (nivel1 < 1 || nivel2 < 1)
    {
        printf("Nivel abaixo");
        return 0;
    }
    
    if (nivel1 > 20 || nivel2 >20)
    {
        printf("Nivel acima");
        return 0;
    }
    
    if (nivel1 >= 1 && nivel1 <= 5)
    {
        dano1 = dano1 * 1.20;
        
    }

    if (nivel2 >=1 && nivel2 <= 5 )
        {
            vida2 = vida2 * 1.20;
        } 
        
    if (nivel1 >= 6 && nivel1 <= 10)
    {
        dano1 = dano1 * 1.50;
 
    }
    if (nivel2 >=6 && nivel2 <= 10 )
        {
             vida2 = vida2 * 1.50;
        }
    if (nivel1 >= 11 && nivel1 <= 15)
    {
        dano1 = dano1 * 1.80;   
    }
    if (nivel2 >= 11 && nivel2 <= 15 )
        {
            vida2 = vida2 * 1.80;
        }
    if (nivel1 >= 16 && nivel1 <= 20)
    {
        dano1 = dano1 * 2.00;    
    }
    if ( nivel2 >= 16 && nivel2 <= 20)
        {
            vida2 = vida2 * 2.00;
        }
    
    treta = duelo(dano1,vida2);

    return 0;
}