#include <stdio.h>

int main()
{
	int qtd = 10;
	int v[qtd];

	for(int i = 0; i < qtd; i++){
		scanf("%d", &v[i]);
	}

	for(int i = 0; i < qtd; i++){
		printf("%d ", v[i]);
	}
	
	return 0;
}