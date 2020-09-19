int abc = 2; 
int semente = 0;
while ( semente <= 100; ) {

	float sem1 = (float)semente *2;
	float sem2 = (float)semente + 1.5 * abc;
	float media = (float)(sem1 + sem2) /2;
	printf("%f", media);
	semente+=2;
	
}