#include <stdio.h>

int main(void) {

	int x=0, j;

	for (int k=0; k<10; k++) {
		printf("Digite: ");
		scanf("%d", &i);
		if (i==1) {
			x=i;
			break;
		}
		else if (i==2) {
			x = j;
			break;
		}
		else if (i==0) {
			x = i + j;
			break;
		}
		else {
			x = i * j;
		}
	}
	
	return 0;
}