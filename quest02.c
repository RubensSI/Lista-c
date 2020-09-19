#include <stdio.h>

// declaração de duas variáveis globais
int sumPairs=0;
int sumOdds=0;

// protótipo da função sumIntervals
void sumIntervals(int number1, int number2);

int main(void) {
	
	// declaração de duas variáveis locais
	int number1;
	int number2;
	
	printf("Imforme dois numeros para o intervalo:\n");
	printf("O primeiro número sempre tem que ser menor que o segundo!\n");
	printf("\nvalor 1: ");
	
	// o comando scanf permite entrada dados via teclado
	scanf("%d", &number1);
	printf("valor 2: ");
	scanf("%d", &number2);
	sumIntervals(number1, number2);
	
	// aqui são exibidos na tela o resultado da soma dos valores pares e ímpares
	printf("\nSoma dos numeros pares: %d", sumPairs);
	printf("\nSoma dos numeros ímpares: %d\n", sumOdds);
	
}

// função para identificar os números pares e ímpares de um sequência
// ela recebe dois valores que indicam o início e fim da sequência
void sumIntervals(int number1, int number2) {
	if (number1 < number2) {
			for (int i=number1; i<=number2; i++) {
				if (i%2==0) {
					sumPairs += i;
				} else {
					sumOdds += i;
				}
			}
	}
}
