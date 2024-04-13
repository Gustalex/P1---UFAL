#include <stdio.h>

int chekduplo(int matriz[9][9], int z, int count, int inst) {
    int x = matriz[z][z];

    if (z < 9) {
        for (int i = 0; i < 9; i++) {
            if (x == matriz[i][z])
                count++;
            if (x == matriz[z][i])
                count++;
        }

        if (count > 2) {
            printf("Instancia %d\nNAO\n\n", inst);
        } else {
            return chekduplo(matriz, z + 1, 0, inst);
        }
    } else {
        printf("Instancia %d\nSIM\n\n", inst);
    }
}

void sdk(int n, int a) {
    int matriz[9][9];

    if (a < n) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        chekduplo(matriz, 0, 0, a + 1);
        sdk(n, a + 1);
    }
}

int main() {
    
    int n;
    scanf("%d", &n);
    sdk(n, 0);

    return 0;
}