/* Faça um programa que mostre a tabuada do número 
	informado pelo usuário utilizando printf
*/

#include <stdio.h>

int main(){
	int n = 0;

	printf("De qual número inteiro tu deseja a tabuada? ");
	scanf("%d", &n);
	
	printf("\nTabuada de %d: \n");
	printf("%dx1 = %d\n", n, n*1);
	printf("%dx2 = %d\n", n, n*2);
	printf("%dx3 = %d\n", n, n*3);
	printf("%dx4 = %d\n", n, n*4);
	printf("%dx5 = %d\n", n, n*5);
	printf("%dx6 = %d\n", n, n*6);
	printf("%dx7 = %d\n", n, n*7);
	printf("%dx8 = %d\n", n, n*8);
	printf("%dx9 = %d\n", n, n*9);
	printf("%dx10 = %d\n", n, n*10);
}