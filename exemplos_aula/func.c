#include <stdio.h>

int soma( int num1, int num2){
    int rsom;
    rsom = num1 + num2;

    return rsom;
}
int sub( int num1, int num2){
    int rsub;
    rsub = num1 - num2;

    return rsub;
}
int multp( int num1, int num2){
    int rmult;
    rmult = num1 * num2;

    return rmult;
}
int divis( int num1, int num2){
    int rdivis;
    rdivis = num1 / num2;

    return rdivis;
}
int rest( int num1, int num2){
    int rrest;
    rrest = num1 % num2;

    return rrest;
}

int main(){

int sum, mult, divisao, subtr, resto;
int n1, n2;

scanf("%d %d", &n1, &n2);

sum = soma(n1,n2);
subtr = sub(n1,n2);
mult = multp(n1,n2);
divisao = divis(n1,n2);
resto = rest(n1, n2);

printf("%d + %d = %d\n",n1,n2,sum);
printf("%d - %d = %d\n",n1,n2,subtr);
printf("%d * %d = %d\n",n1,n2,mult);
printf("%d / %d = %d\n",n1,n2,divisao);
printf("%d %% %d = %d\n",n1,n2,resto);

return 0;
}