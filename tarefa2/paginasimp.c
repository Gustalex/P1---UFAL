#include <stdio.h>
#include <stdbool.h>

int main() {
    int num = 1;
    bool printed[501] = {false};  

    printf("Primeira impressao:\n");

    while (num <= 500) {
        printf("%d, ", num);
        printed[num] = true;  
        if (num % 4 == 2) {
            num += 3;
        } else {
            num += 1;
        }
    }

    printf("\nSegunda impressao: \n");
    for (int i = 1; i <= 500; i++) {
        if (!printed[i]) {
            printf("%d, ", i);   
        }
    }

    return 0;
}
