#include <stdio.h>

int primo(int n, int divisor) {
   
    if (n < 2) return 0;
        
    if (divisor == 1) return 1;
        
    if (n % divisor == 0) return 0;
        
    return primo(n, divisor - 1);
}

void repetprim() {
    int num;
    
    scanf("%d", &num);
    
    if (num == -1) return 0;
    
    int prim = primo(num, num - 1);
    printf("%d\n", prim);
    repetprim();
}

int main() {
    
    repetprim();
    
    return 0;
}
