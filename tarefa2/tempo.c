#include <stdio.h>

int main (){

    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    if(a == 0 && b == 0 && c == 0)
    {
        printf("N\n");
        return 0;
    }

    if (a == b || a == c || b == c) printf("S\n");

    else
    {
        if (a + b == c || a == b + c || b == a + c) printf ("S\n");
        else printf("N\n");
    }

    return 0;
}