#include <stdio.h>

void tabuada(int operator);

int main(void) {
	system("clear");
	// comando para imprimir uma mesagem na tela
	printf("Informe um numero: ");
	
	// variável para receber o numero de tipo inteiro
	int operator = 0;
	
	// função para receber uma entra do teclado e armazenar na variável operator
	scanf("\n%d", &operator);
	
	// chamada a função tabuada passando a oparetor como parâmetro
	tabuada(operator);
}

// função para calcular a tabuada de um numero passado como parâmetro
void tabuada(int operator) {

	// bloco de código para a operação de adição
	printf("==> Tabuada de adição do: %d <==\n\n", operator);
	int count = 0;
	while (count < 10) {
		printf(" %d + %d = %d\n", count, operator, (operator + (count)));
		count = count + 1;
	}
	printf("\n");
		
	// bloco de código para a operação de multiplicação	
	printf("==> Tabuada de multiplicação do %d <==\n\n", operator);
	count = 0;
	while (count < 10) {
		printf(" %d * %d = %d\n", count, operator, operator * (count));
		count = count + 1;
	}
	printf("\n");
	
	// bloco de código para a operação de subtração
	printf("==> Tabuada de subtração do %d <==\n\n", operator);
	int acumulator = operator;
	count = 0;
	while (count < 10) {
		printf(" %d - %d = %d\n", acumulator, operator, (acumulator - operator));
		acumulator = acumulator + 1;
		count = count + 1;
	}
	printf("\n");
	
	// bloco de código para a operação de divisão
	printf("==> Tabuada de divisão do %d <==\n\n", operator);
	acumulator = operator;
	count = 0;
	while (count < 10) {
		printf(" %d / %d = %d\n", acumulator, operator, (acumulator / operator));
		acumulator = acumulator + operator;
		count = count + 1;
	}
	printf("\n");
}
	 
