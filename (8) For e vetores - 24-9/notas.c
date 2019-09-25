#include <stdio.h>

int main()
{
	int qtdAlunos = 5;
	int qtdNotas = 4;
	
	const char *nome[qtdAlunos];
	int nota[qtdAlunos][qtdNotas];
	float media[qtdAlunos];
	float maior = 0;
	int quemTemAMaior = 0;

	for(int i = 0; i < qtdAlunos; i++){
		printf("Informe a primeira letra do nome do aluno %d: ", i);
		scanf("%s", nome[i]);
		
		for(int j = 0; j < qtdNotas; j++){
			printf("Informe a %d nota de %s: ", j, nome[i]);
			scanf("%d", &nota[i][j]);
		}
	}

	for(int i = 0; i < qtdAlunos; i++){
		float total = 0;
		
		for(int j = 0; j < qtdNotas; j++){
			total += nota[i][j];
		}
		
		media[i] = total / qtdNotas;
		printf("Média de %c: &f", nome[i], total);
		
		if(media[i] > maior){
			maior = media[i];
			quemTemAMaior = i;
		}
	}

	printf("A maior media é de %c, de valor: %f", nome[quemTemAMaior], maior);

	return 0;
}