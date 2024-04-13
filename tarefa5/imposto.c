#include <stdio.h>

int main() {

    double dolar, aliqu, valprod, valfrete;

    scanf("%lf %lf %lf %lf", &dolar, &aliqu, &valprod, &valfrete);

    double produto = dolar * valprod;
    double aliquota = aliqu/100;

    if (valprod < 2500)
    {
        double frete = dolar * valfrete;
        double import = (produto + frete) * 0.6;
        double vfinal = (import + produto + frete) / (1 - aliquota);
        double icms = vfinal * aliquota;

        printf("%.2lf\n", dolar);
        printf("%.2lf\n", produto);
        printf("%.2lf\n", frete);
        printf("%.2lf\n", produto + frete);
        printf("%.2lf\n", import);
        printf("%.2lf\n", icms);
        printf("%.2lf\n", icms + import);
        printf("%.2lf\n", vfinal);
        printf("Impostos calculados com o frete\n");
    } 
    else
    {
        double frete = 0;
        double import = (produto + frete) * 0.6;
        double vfinal = (import + produto + frete) / (1 - aliquota);
        double icms = vfinal * aliquota;

        printf("%.2lf\n", dolar);
        printf("%.2lf\n", produto);
        printf("%.2lf\n", valfrete * dolar);
        printf("%.2lf\n", produto +(valfrete* dolar));
        printf("%.2lf\n", import);
        printf("%.2lf\n", icms);
        printf("%.2lf\n", icms + import);
        printf("%.2lf\n", vfinal + (valfrete * dolar));
        printf("Impostos calculados sem o frete\n");
    }

    return 0;
}
