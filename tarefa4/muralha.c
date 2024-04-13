#include <stdio.h>

void viagem(int dias, int contdias, int direita, int cima, int moedas, int lado)
{	
	if (dias == contdias)
	{	
		printf("%d\n", moedas);
		return;
	}
	else{
		if (direita < cima)	lado = 1;

		else if (direita > cima)
		{
			lado = 2;
		}

		char direc;
		scanf(" %c", &direc);
		
		if(direita == cima) 
		{
			if (lado == 1)
			{
			    if (direc == 'D') moedas++;
			}
			else if (lado == 2)
			{
				if (direc == 'C') moedas++;
            }
		} 
		
		if (direc =='D') direita++;
			
		else if(direc == 'C')
		{
			cima++;
		}
		viagem(dias, contdias + 1, direita, cima, moedas, lado);
	}
}	

int main(){
    
    int contdias = 0;       
	int numdias;

	scanf("%d ", &numdias);

    if (numdias == 1)
    {
        char dir;
       
        scanf(" %c",&dir);

        printf("0\n");
       
        return 0;
    }
   
    else viagem(numdias,contdias, 0, 0, 0, 0);
	
	return 0;
}