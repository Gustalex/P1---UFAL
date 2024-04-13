#include <stdio.h>
#include <string.h>

void printInverso(char string[], int index) {
    
    if (index < 0) return;

    printf("%c", string[index]);

    printInverso(string, index - 1);
}

int main() {

    char string[256];

    scanf("%s", string);

    int tamanho = strlen(string);

    printInverso(string, tamanho - 1);
    

    return 0;
}
