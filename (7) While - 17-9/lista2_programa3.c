#include <stdlib.h>
#include <stdio.h>

void main(){
	char o = '\0';
	int i = 0, j = 0;

	printf("OPERAÇÕES DISPONÍVEIS: \n");
	printf("(+) Adição\n(-) Subtração\n(*) Multiplicação\n(/) Divisão\n\n");
	printf("Qual a operação desejada? ");
	scanf("%c", &o);

	switch(o){
		case '+':
		for(i = 1; i <= 10; i++){
			for(j = 1; j <= 10; j++){
				printf("%d+%d = %d \t", j, i, j+i);
			}
				printf("\n");
		}
		break;
		case '-':
		for(i = 1; i <= 10; i++){
			for(j = 1; j <= 10; j++){
				printf("%d-%d = %d \t", j, i, j-i);
			}
				printf("\n");
		}
		break;
		case '*':
		for(i = 1; i <= 10; i++){
			for(j = 1; j <= 10; j++){
				printf("%d*%d = %d \t", j, i, j*i);
			}
				printf("\n");
		}
		break;
		case '/':
		for(i = 1; i <= 10; i++){
			for(j = 1; j <= 10; j++){
				float d = 0.0, k = 0.0, l = 0.0;
				l = (float) j;
				k = (float) i;
				d = l/k;
				printf("%d/%d = %.2f \t", j, i, d);
			}
				printf("\n");
		}
		break;
		default:
			printf("Foi informada uma operação inválida");
	}
}