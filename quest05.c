#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, k;
	int cont=0;
	for ( i=1; i<=9; i++ ) {
		for ( j=0; j<=9; j++) {
			for ( k=0; k<=9; k++) {
				printf("%d (%d*%d*%d)\n", i*j*k, i, j, k);
				cont++;
				if (cont == 20) {
					getchar();
					cont = 0;
				}
			}
		}
		
	}
	return 0;
}
