#include <stdio.h>
double calcjogos(int anos, double preco, int dificuldade, double *novopreco) {
    
    double desconto;

    if (anos == 0) {
        return 0;
    }

    if (preco < 45) {
        *novopreco = preco;
        return *novopreco;
    }

    if (preco <= 100) {
        switch (dificuldade) {
            case 0:
                desconto = 0.125;
                break;
            case 1:
                desconto = 0.10;
                break;
            case 2:
                desconto = 0.09;
                break;
            case 3:
                desconto = 0.075;
                break;
            case 4:
                desconto = 0.06;
                break;
            case 5:
                desconto = 0.05;
                break;
            default:
                desconto = 0.0;
                break;
        }
    } else {
        switch (dificuldade) {
            case 0:
                desconto = 0.25;
                break;
            case 1:
                desconto = 0.20;
                break;
            case 2:
                desconto = 0.18;
                break;
            case 3:
                desconto = 0.15;
                break;
            case 4:
                desconto = 0.12;
                break;
            case 5:
                desconto = 0.10;
                break;
            default:
                desconto = 0.0;
                break;
        }
    }

    *novopreco = preco - (preco * desconto);

    if (*novopreco <= 45)
    {
        *novopreco = 45;
    }

    calcjogos(anos - 1, *novopreco, dificuldade, novopreco);

    return *novopreco;
}

void loop(int num, int i) {
    if (i < num)
    {
        double preco, novopreco = 0;
        int dificuldade;

        scanf("%d %lf", &dificuldade, &preco);

        double pfinal = calcjogos(3, preco, dificuldade, &novopreco);

        printf("Jogo[%d] = R$%.2lf\n", i, pfinal);   

        loop(num, i + 1);
    }
}

int main() {
   
    int num;
    scanf("%d", &num);

    loop(num, 0);

    return 0;
}
