#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0;
	
	scanf("%d", &i);
	
	if(i % 2 == 0)
		printf("%d %c par", i, 130);
	else
		printf("%d %c %cmpar", i, 130, 161);
	
	return 0;
}