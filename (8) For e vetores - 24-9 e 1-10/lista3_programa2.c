//Compilar com -std=c99
#include <stdio.h>

int main()
{
	int qtdAlunos = 10;
	int qtdNotas = 4;

	char nome[qtdAlunos];
	int nota[qtdAlunos][qtdNotas];

	for(int i = 0; i < qtdAlunos; i++){
		printf("Informe a primeira letra do nome do aluno %d: ", i);
		scanf("%s", &nome[i]);

		for(int j = 0; j < qtdNotas; j++){
			printf("Informe a %d nota de %s: ", j, &nome[i]);
			scanf("%d", &nota[i][j]);
		}
	}

	 for(int i = 0; i < qtdAlunos; i++){
		float total = 0;

		for(int j = 0; j < qtdNotas; j++){
			total += nota[i][j];
		}

		printf("\nMedia de %c: %f", nome[i], total / qtdNotas);
	}

	return 0;
}
