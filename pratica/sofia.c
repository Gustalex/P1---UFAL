#include<stdio.h>

int soma_divisores(int i, int n)
{
    if (i > (n / 2))
    {
        return 0;
    }
    else
    {
        if (n % i == 0)
        {
            return i + soma_divisores(i + 1, n);
        }
        else
        {
            return 0 + soma_divisores(i + 1, n);
        }
    }
}

int eh_amigo(int x, int y)
{
    return soma_divisores(1, x) == y;
}

int amigos_de_n(int i, int n)
{
    if (i > n)
    {
        return 0;
    }
    else
    {
        int qtde = 0;

        if (eh_amigo(i, n))
        {
            qtde++;

            printf("%d e amigo de %d\n", i, n);   
        }

        return qtde + amigos_de_n(i + 1, n);
    }
}


int loop(int x, int i, int y)
{
    if (i > y)
    {
        return 0;
    }
    else
    {
        int qtde = 0;

        qtde = amigos_de_n(x, i);

        return qtde + loop(x, i + 1, y);
    }
}

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);

    if (loop(x, x, y) == 0)
    {
        printf("Nao existem numeros amigos\n");
    }

    return 0;
}
