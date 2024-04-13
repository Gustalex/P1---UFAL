#include <stdio.h>

int tmnciclo(int num) {
    if(num==1) {
        return 1;
    } else if(num%2==0) {
        num = num / 2;
    } else {
        num = (3 * num) + 1;
    }
    return 1+tmnciclo(num);
}
void maiorciclo(int i, int fim, int *maiortmn) {
    
    if (i<=fim) {
        
        int tmnatual = tmnciclo(i);

        if (tmnatual > *maiortmn)        
        {
            *maiortmn = tmnatual;
        }
        maiorciclo(i + 1, fim, maiortmn);
    }
}
void loop(){

    int inicio, fim, maiortmn;

    if (scanf("%d %d", &inicio, &fim)==EOF) return;

    maiortmn=0;

    if(inicio<=fim) maiorciclo(inicio, fim, &maiortmn);
    
    else maiorciclo(fim, inicio, &maiortmn);

    printf("%d %d %d\n", inicio, fim, maiortmn);
    
    loop();
}
int main() {
    
    loop();
    
    return 0;
}