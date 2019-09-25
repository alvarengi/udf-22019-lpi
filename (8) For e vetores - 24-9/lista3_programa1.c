#include <stdio.h>

int main()
{
	int n[20];

	for(int i = 0; i < 20; i++){
		printf("Informe o número de posição %d: ", i);
		scanf("%d", &n[i]);
	}
	
	for(int i = 0; i < 20; i++){
		printf("%d ", n[i]);
	}
	
	return 0;
}