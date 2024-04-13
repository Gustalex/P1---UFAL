#include <stdio.h>

void loop_scanf()
{
    int n;
    scanf("%d", &n);
    if (n != -1)
    {
        printf(">> n = %d\n", n);
        loop_scanf();
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    loop_scanf();
    return 0;
}
