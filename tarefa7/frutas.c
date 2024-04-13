#include <stdio.h>

void calc(int dias){
    
    double somafrutas = 0;
    double somavalor = 0;

    for (int k = 1; k <= dias; k++){

        int contfrutas = 1;

        double valor;
        char frutas[1000];

        scanf("%lf", &valor);
        scanf(" %[^\n]", frutas);

        for (int j = 0; frutas[j] != '\0'; j++) {
            if (frutas[j] == ' ')
                contfrutas++;
        }

        printf("dia %d: %d kg\n", k, contfrutas);

        somafrutas += contfrutas;
        somavalor += valor;
    }

    double kgmedio = somafrutas / dias;
    double valormedio = somavalor / dias;

    printf("%.2lf kg por dia\n", kgmedio);
    printf("R$ %.2lf por dia\n", valormedio);

}

int main() {
   
    int n;
    scanf("%d", &n);

    calc(n);

    return 0;
}
