#include <stdio.h>
#include <math.h>

double supervisores(double a, double b){
    double spv;

    spv = ceil(a/b);

    return spv;
}
double capbusao(double c, double d){
    double capacidade = c * d;
    return capacidade;
}
int main(){

    double qtdbus, capbus, alunos, alunosporsup, superv,vagas,passageiros;
    scanf("%lf %lf %lf %lf",&alunos,&alunosporsup,&qtdbus,&capbus);

    vagas = capbusao(qtdbus,capbus);

    if (alunos == 0)
    {
        printf("Davi foi assistir o filme sozinho =(");
        return 0;
    }

    if(alunosporsup == 0) passageiros = alunos;
    
    else
    {
        passageiros = alunos + supervisores(alunos,alunosporsup);

        if (vagas == passageiros)
        {
            printf("Iremos ao cinema!\n");
            printf("Todas as vagas foram preenchidas.\n");   
        } 
        else if (vagas > passageiros)
        {
            printf("Iremos ao cinema!\n");
            printf("Vagas Vazias = %.0lf\n",vagas-passageiros);
            
        }
        else
        {
            printf("Não é possível.\n");
            printf("Falta %.0lf vagas.\n",passageiros - vagas);
        }
        
    }

    return 0;
}