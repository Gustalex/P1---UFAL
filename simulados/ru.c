#include <stdio.h>
 
#define PedroVencedor 0
#define TulioVencedor 1
 
#define Guerreiro 1
#define Mago 2
#define Arqueiro 3
 
double batalha(int classePedro, double ataquePedro, double vidaPedro, int classeTulio, double ataqueTulio, double vidaTulio)
{
    if(classePedro == Guerreiro && classeTulio == Arqueiro)
    {
        vidaPedro = vidaPedro * 1.30;
    }
    if(classePedro == Arqueiro && classeTulio == Mago)
    {
        ataquePedro = ataquePedro * 1.25;
    }
    if(classePedro == Mago && classeTulio == Guerreiro)
    {
        vidaPedro = vidaPedro * 1.15;
        ataquePedro = ataquePedro * 1.15;
    }
 
    if(classeTulio == Guerreiro && classePedro == Arqueiro)
    {
        vidaTulio = vidaTulio * 1.30;
    }
    if(classeTulio == Arqueiro && classePedro == Mago)
    {
        ataqueTulio = ataqueTulio * 1.25;
    }
    if(classeTulio == Mago && classePedro == Guerreiro)
    {
        vidaTulio = vidaTulio * 1.15;
        ataqueTulio = ataqueTulio * 1.15;
    }
 
    if(vidaPedro <= vidaTulio)
    {
        vidaTulio -= ataquePedro;
 
        if(vidaTulio <= 0)
        {
            return PedroVencedor;
        }
 
        vidaPedro -= ataqueTulio;
 
        if(vidaPedro <= 0)
        {
            return TulioVencedor;
        }
 
        if(vidaPedro > vidaTulio)
        {
            return PedroVencedor;
        }
 
        if(vidaTulio > vidaPedro)
        {
            return TulioVencedor;
        }
 
        if(ataquePedro > ataqueTulio)
        {
            return PedroVencedor;
        }
 
        if(ataqueTulio > ataquePedro)
        {
            return TulioVencedor;
        }
    }
 
    if(vidaTulio <= vidaPedro)
    {
        vidaPedro -= ataqueTulio;
 
        if(vidaPedro <= 0)
        {
            return TulioVencedor;
        }
 
        vidaTulio -= ataquePedro;
 
        if(vidaTulio <= 0)
        {
            return PedroVencedor;
        }
 
        if(vidaTulio > vidaPedro)
        {
            return TulioVencedor;
        }
 
        if(vidaPedro > vidaTulio)
        {
            return PedroVencedor;
        }
 
        if(ataqueTulio > ataquePedro)
        {
            return TulioVencedor;
        }
 
        if(ataquePedro > ataqueTulio)
        {
            return PedroVencedor;
        }
    }
 
}
 
int main (){
 
    int vitoriasPedro = 0, vitoriasTulio = 0, duelo1, duelo2, duelo3;
    int classe1, classe2, classe3, classe4, classe5, classe6;
    double ataque1, ataque2, ataque3, ataque4, ataque5, ataque6;
    double vida1, vida2, vida3, vida4, vida5, vida6;
 
    scanf("%d %lf %lf", &classe1, &ataque1, &vida1);
    scanf("%d %lf %lf", &classe2, &ataque2, &vida2);
    scanf("%d %lf %lf", &classe3, &ataque3, &vida3);
    scanf("%d %lf %lf", &classe4, &ataque4, &vida4);
    scanf("%d %lf %lf", &classe5, &ataque5, &vida5);
    scanf("%d %lf %lf", &classe6, &ataque6, &vida6);
 
    duelo1 = batalha(classe1, ataque1, vida1, classe4, ataque4, vida4);
    duelo2 = batalha(classe2, ataque2, vida2, classe5, ataque5, vida5);
    duelo3 = batalha(classe3, ataque3, vida3, classe6, ataque6, vida6);
 
    if(duelo1 == PedroVencedor)
    {
        vitoriasPedro++;
        printf("Rodada1: Pedro\n");
    }
    else
    {
        vitoriasTulio++;
        printf("Rodada1: Tulio\n");
    }
 
    if(duelo2 == PedroVencedor)
    {
        vitoriasPedro++;
        printf("Rodada2: Pedro\n");
    }
    else
    {
        vitoriasTulio++;
        printf("Rodada2: Tulio\n");
    }
 
    if(duelo3 == PedroVencedor)
    {
        vitoriasPedro++;
        printf("Rodada3: Pedro\n");
    }
    else
    {
        vitoriasTulio++;
        printf("Rodada3: Tulio\n");
    }
 
    if(vitoriasPedro > vitoriasTulio)
    {
        printf("Pedro vitorioso\n");
    }
    else
    {
        printf("Tulio vitorioso");
    }
 
    return 0;
}