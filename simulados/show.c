#include <stdio.h>
 
int testeCasa (int ped, int tul, int gab, int yan, int pal, int vin, int eli){
    int integrantes = 0;
 
    if (ped >= 0){
        integrantes++;
    }
    if (tul >= 0){
        integrantes++;
    }
    if (gab >= 0){
        integrantes++;
    }
    if (yan >= 0){
        integrantes++;
    }
    if (pal >= 0){
        integrantes++;
    }
    if (vin >= 0){
        integrantes++;
    }
    if (eli >= 0){
        integrantes++;
    }
 
    return integrantes;
 
}
 
 
int main(){
    int ped, tul, gab, yan, pal, vin, eli;
    scanf("%d %d %d %d %d %d %d", &ped, &tul, &gab, &yan, &pal, &vin, &eli);
 
    ped -= 7400, tul -= 4400, gab -= 5200, yan -= 4000, pal -= 4400, vin -= 4800, eli -= 5600;
 
    int integrantes1 = testeCasa (ped - 1000, tul - 400, gab - 400, yan - 400, pal - 400, vin - 800, eli - 1000);
    int integrantes2 = testeCasa (ped - 200, tul - 800, gab - 1200, yan - 800, pal - 1200, vin - 1200, eli - 1800);
    int integrantes3 = testeCasa (ped - 1000, tul - 1600, gab - 2000, yan - 1200, pal - 1200, vin - 800, eli - 1000);
 
    int casa1 = 10 * integrantes1;
    int casa2 = 20 * integrantes2;
    int casa3 = 30 * integrantes3;
 
 
    if (integrantes1 == 0 && integrantes2 == 0 && integrantes3 == 0){
        printf("NAO TERA SHOW!");
    }
    else if (casa1 >= casa2 && casa1 >= casa3){
        printf("CASA 1\n%d\n%d", casa1, integrantes1);
    }
    else if (casa2 >= casa3){
        printf("CASA 2\n%d\n%d", casa2, integrantes2);        
    }
    else{
        printf("CASA 3\n%d\n%d", casa3, integrantes3);    
    }
    
    return 0;
}