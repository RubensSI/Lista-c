#include <stdio.h>

int main(void) {
	int i=0;
	while(i<20) {
		if(i==2) continue;
		if(i==5) break;
		printf("i =%d", i);
		i++;
	}
}