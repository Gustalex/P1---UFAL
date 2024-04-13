#include <stdio.h>


int num(int ini, int pos, int cont) {
	int result = ini;

	if(pos == 0) return result;
		
	if((cont % 2) == 0) result += 3;
		
	else result += result % 5;

	cont++;

	if(cont < pos) num(result, pos, cont);
	
	else return result;
	
}

int main() {
	int N, T;

	scanf("%d %d", &N, &T);

	printf("%d\n", num(N, T, 0));

	return 0;
}