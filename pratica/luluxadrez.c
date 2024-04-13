#include <stdio.h>
 
int main() {
    
    int pontos_brancos = 0, pontos_pretos = 0;
    char matriz[8][8];
    
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            char string[3];
            scanf("%s", &string);
            
            if(string[1] == 'b')
            {
                if(string[0] == 'p') pontos_brancos++;
                if(string[0] == 'b') pontos_brancos += 3;
                if(string[0] == 'c') pontos_brancos += 3;
                if(string[0] == 't') pontos_brancos += 8;
                if(string[0] == 'd') pontos_brancos += 9;
                
            }
            
            if(string[1] == 'p')
            {
                if(string[0] == 'p') pontos_pretos++;
                if(string[0] == 'b') pontos_pretos += 3;
                if(string[0] == 'c') pontos_pretos += 3;
                if(string[0] == 't') pontos_pretos += 8;
                if(string[0] == 'd') pontos_pretos += 9;
                
            }
        }
    }
    
    if(pontos_brancos > pontos_pretos)
    {
        printf("Brancas");
    }
    else if(pontos_pretos > pontos_brancos)
    {
        printf("Negras");
    }
    else
    {
        printf("Empate");
    }
    
    return 0;
}