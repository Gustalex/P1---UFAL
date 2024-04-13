#include <stdio.h>

int main(){

    double salario, tarifa, vfixo, ppkm, kmrodado, granauber, saldorest;
    int fds;

    scanf("%lf %lf %lf %lf %d",&salario,&vfixo,&ppkm,&kmrodado,&fds);

    granauber = salario * 0.30;

    tarifa = vfixo + (ppkm * kmrodado);

    if(fds == 1 ) 
    {
        tarifa = tarifa * 1.1;
        saldorest = granauber - tarifa;

        if (saldorest < 0 )
        {
            printf ("Não vai poder viajar.\n");
            printf ("%.2lf\n",saldorest * -1);
        }
        else 
        {
            printf ("Vai poder viajar.\n");
            printf ("%.2lf\n",tarifa);
            printf ("%.2lf\n",saldorest);   
        }
    }
    
    if(fds == 0 ) 
    {
        saldorest = granauber - tarifa;

        if (saldorest < 0 )
        {
            printf ("Não vai poder viajar.\n");
            printf ("%.2lf\n",saldorest * -1);
        }
        else 
        {
            printf ("Vai poder viajar.\n");
            printf ("%.2lf\n",tarifa);
            printf ("%.2lf\n",saldorest);   
        }
    }
    
    return 0;
}
