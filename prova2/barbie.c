#include <stdio.h>
#include <math.h>

double supervisores(double alu,double alupsup){
    double numsup;

    if (alupsup>0)
    {
        numsup = ceil (alu / alupsup);
    }
    
    return numsup;

}

int checkvagas(int bus, int capbus){

    int Capacidade;
    Capacidade = bus * capbus;

    return Capacidade;
}    


int main (){

    double alunos,alunosporsup,  passageiros, vagas, vagasvazias;
    int bus, capbus;
    scanf("%lf %lf %d %d",&alunos, &alunosporsup, &bus, &capbus);

    passageiros = alunos + supervisores(alunos, alunosporsup);
    vagas = checkvagas(bus,capbus);

    vagasvazias = vagas - passageiros;

    if (vagas >= passageiros)
    {
        printf("Iremos ao cinema!\n");

        if (vagasvazias == 0) printf("Todas as vagas foram preenchidas.");
            
        else printf("Vagas Vazias = %.0f",vagasvazias);
    }
    
    else printf("Não é possível.\nFalta %.0f vagas.\n",vagasvazias * -1);

    
    return 0;
}