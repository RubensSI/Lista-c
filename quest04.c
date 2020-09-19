#include <stdio.h>

int main(void) {
	int maior, menor;
	int contIdade=0, somaIdades=0, idade;
	float media=0;
	
	printf("Informe um idade: \n");
	scanf("%d", &idade);
	
	maior = idade;
	menor = idade;
	
	while(idade > 0) {
		contIdade++;
		somaIdades += idade;
		if (idade < menor ) {
			menor = idade;
		}
		
		if (idade > maior) {
			maior = idade;
		}
		
		printf("Digite uma nova idade ou 0 para sair \n");
		scanf("%d", &idade);
	}
	
	printf("numero de passoas: %d\n", contIdade);
	printf("Média de idades: %f\n", (float)(somaIdades / (contIdade)));
	printf("Maior idade %d\n", maior);
	printf("Menor idade %d\n", menor);
}


