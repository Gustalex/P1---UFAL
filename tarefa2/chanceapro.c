# include <stdio.h>

int main(){

    double passadas, resolvidas, percumpr;

    scanf("%lf %lf",&passadas,&resolvidas);

    percumpr = resolvidas / passadas;
    percumpr = percumpr * 100;

    if (percumpr >= 0 && percumpr< 20)
    {
        printf("%.2lf%% ",percumpr);
        printf("4.40%% ");
        printf("Pessimo");
    }
    else if (percumpr >= 20 && percumpr< 40)
    {
        printf("%.2lf%% ",percumpr);
        printf("31.65%% ");
        printf("Ruim");
    }
    else if (percumpr >= 40 && percumpr< 60)
    {
        printf("%.2lf%% ",percumpr);
        printf("56.82%% ");
        printf("Bom");
    }
    else if (percumpr >= 60 && percumpr< 80)
    {
        printf("%.2lf%% ",percumpr);
        printf("80.00%% ");
        printf("Muito Bom");
    }
    
    else
    {
        printf("%.2lf%% ",percumpr);
        printf("94.00%% ");
        printf("Excelente");
    }

    return 0;
}