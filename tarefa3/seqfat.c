#include <stdio.h>

int fatorial(int numx) {
    
    if (numx == 0 || numx == 1) {
        return 1;
    } else {
        return numx * fatorial(numx - 1);
    }
}
int repetscan(){

   int num,fatnum;
   scanf("%d",&num);

   if (num != -1)
   {
        fatnum = fatorial(num);
        printf("%d\n",fatnum);
        repetscan();
   }
}

int main() {
    
    int result;

    result = repetscan();
   
    return 0;
}
