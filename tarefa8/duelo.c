#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check1(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return 0;
            }
        }
    }
    return 1;
}

int check2(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((j == 2 - i && matrix[i][j] != 1) || (j != 2 - i && matrix[i][j] != 0)) {
                return 0;
            }
        }
    }
    return 2;
}

void duelo(int* vidaL, int* vidaD, int matrizL[3][3], int matrizD[3][3]) {
   
    int resL = check1(matrizL) + check2(matrizL);
    int resD = check1(matrizD) + check2(matrizD);

    if ((resL == 1 || resL == 2) && (resD != 1 && resD != 2)) {
        *vidaD -= 15;
    }
    if ((resL != 1 && resL != 2) && (resD == 1 || resD == 2)) {
        *vidaL -= 15;
    }
    if (resL == resD && (resL != 0 && resD != 0)) {
        *vidaD -= 15;
        *vidaL -= 15;
    }
}

int main() {
    int vidaL, vidaD;
    int continuar = 1;
    scanf("%d %d", &vidaL, &vidaD);

    while (continuar == 1) {
        int matrizL[3][3], matrizD[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (scanf("%d", &matrizL[i][j]) == EOF) {
                    continuar = 0;
                    break;
                }
            }
            if (continuar == 0)
                break;
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (scanf("%d", &matrizD[i][j]) == EOF) {
                    continuar = 0;
                    break;
                }
            }
            if (continuar == 0)
                break;
        }

        if (continuar == 0) {
            break;
        }

        duelo(&vidaL, &vidaD, matrizL, matrizD);
    }
    
    if (vidaD > vidaL) {
        printf("Darth Vader venceu.");
    } else if (vidaD < vidaL) {
        printf("Luke Skywalker venceu.");
    } else {
        printf("Houve empate.");
    }

    return 0;
}