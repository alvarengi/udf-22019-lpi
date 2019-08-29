#include <stdio.h>

int main()
{
	int opcao = 0;
	
    printf("\t\t\t\t\t\t\t===== Menu =====");
    printf("\n\t\t\t\t\t\t\t1. Clientes");
    printf("\n\t\t\t\t\t\t\t2. Fornecedores");
    printf("\n\t\t\t\t\t\t\t3. Faturas");
    printf("\n\t\t\t\t\t\t\t0. Sair");
    printf("\n\t\t\t\t\t\t\t================");
	printf("Qual a opção desejada? ");
	scanf("%d", &opcao);

	if(opcao==1)
		printf("Rotina Clientes");
	else if(opcao==2)
		printf("Rotina Fornecedores");
	else if(opcao==3)
		printf("Rotina Faturas");

    return 0;
}