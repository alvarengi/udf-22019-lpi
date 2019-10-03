#include <stdio.h>

int main()
{
	float sal[12];
	float total;
	int i;

	for(i=0; i<12; i++){
		printf("Entre com o %d salario: ", i);
		scanf("%f", &sal[i]);
	}

	for(i=0; i < 12; i++)
		total += sal[i];

	printf("Total: R$%.2f", total);

	return 0;
}