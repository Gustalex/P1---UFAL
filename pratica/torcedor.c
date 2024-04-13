#include <stdio.h>


int main(){

    double casafora, tempo, publico, lesionados, entrosamento; 
    double porc = 100.00;

    scanf("%lf %lf %lf %lf %lf",&casafora,&tempo,&publico,&lesionados,&entrosamento);

    if(casafora == 1)
    {
        if(tempo == 1) porc += 33.21;
        else if(tempo == 2)  porc += 10.51;
        else porc -= 20.7;

        if (publico > 40000) porc = porc + (publico * 0.0008);
        else porc = porc - (publico * 0.0008);
        
        if(entrosamento < 0) porc = porc - (entrosamento * 1.8);
        else porc = porc + (entrosamento * 2.7);

        if(lesionados > 0) porc = porc - (lesionados * 2.7);
    }
    else
    {
        if(tempo == 2 || tempo == 3) porc = 0;
        else porc -= 10.87;

        if(publico > 45000) porc = porc - (publico * 0.0003);
        else porc = porc - (publico * 0.0001);

        if(entrosamento < 0) porc = porc - (entrosamento * 1.5);
        else porc = porc + (entrosamento * 5.2);

        if(lesionados > 0) porc = porc - (lesionados * 2.7);
    }
    if(porc > 100) porc = 100;
    else if(porc < 0) porc = 0;
    
    printf("A chance de vitoria do flamengo e de %.2lf\n",porc);

    return 0;
}