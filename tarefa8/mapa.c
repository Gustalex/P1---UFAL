#include <stdio.h>

void ler_mapa(int linhas, int colunas, int mapa[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }
}

void ler_mov(int num_mov, char movimentos[]) {
    for (int i = 0; i < num_mov; i++) {
        scanf(" %c", &movimentos[i]);
    }
}

void att_pos(int *x, int *y, char movimento, int linhas, int colunas, int mapa[linhas][colunas]) {
    
    int novo_x = *x;
    int novo_y = *y;

    if (movimento == 'C' && *y > 0 && mapa[*y - 1][*x] == 1)
        novo_y = *y - 1;
    else if (movimento == 'E' && *x > 0 && mapa[*y][*x - 1] == 1)
        novo_x = *x - 1;
    else if (movimento == 'D' && *x < colunas - 1 && mapa[*y][*x + 1] == 1)
        novo_x = *x + 1;
    else if (movimento == 'B' && *y < linhas - 1 && mapa[*y + 1][*x] == 1)
        novo_y = *y + 1;

    if (mapa[novo_y][novo_x] == 1) {
        *x = novo_x;
        *y = novo_y;
    }
}


int main() {
    
    int linhas, colunas;
    scanf("%d%d", &linhas, &colunas);

    int mapa[linhas][colunas];
    ler_mapa(linhas, colunas, mapa);

    int num_mov;
    scanf("%d", &num_mov);

    char movimentos[num_mov];
    ler_mov(num_mov, movimentos);

    int x, y;
    scanf("%d%d", &x, &y);

    for (int i = 0; i < num_mov; i++) {
        att_pos(&x, &y, movimentos[i], linhas, colunas, mapa);
    }

    printf("(%d,%d)\n", y, x);

    return 0;
}
