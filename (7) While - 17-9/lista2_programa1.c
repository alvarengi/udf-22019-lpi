#include <stdlib.h>
#include <stdio.h>

void main(){
	int idade;

	printf("Informe sua idade: ");
	scanf("%d", &idade);

	if(idade >= 1 && idade <= 12){
		printf("Você é uma criança!");
	}else if(idade >= 13 && idade <= 17){
		printf("Você é um adolescente!");
	}else if(idade >= 18 && idade <= 60){
		printf("Você é um adulto!");
	}else{
		printf("Não foi possível classificá-lo.");
	}
}