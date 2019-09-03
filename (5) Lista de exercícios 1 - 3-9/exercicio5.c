#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0;
	
	scanf("%d", &i);
	
	if(i == 1)
		printf("%d %c igual %c 1", i, 130, 133);
	else if(i == 2)
		printf("%d %c igual %c 2", i, 130, 133);
	else
		printf("%d %c diferente de 1 e 2", i, 130, 133);
	
	return 0;
}