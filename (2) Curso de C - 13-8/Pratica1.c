#include <stdio.h>

int main() {
	char nome[] = "";
	
	for(int count=1; count <= 10; count++){
		printf("Qual seu nome? ");
		scanf("%s", &nome);
								
		printf("Meu nome eh %s e eu estou aprendendo C", nome);
	}
	
	return 0;
}
