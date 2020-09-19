#include <stdio.h>

int main(void) {
	int countDigitos=0; value;
	printf("Informe um numero: \n");
	scanf("%d", value);

	do {
		countDigitos++;
		value += 10;
	} (value != 0);

	printf("(%d)\n", countDigitos);
	return 0;
}