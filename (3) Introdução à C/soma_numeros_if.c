#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 0,
		a = 0,
		b = 0,
		r = 0;
		
	scanf("%d", &a);
	scanf("%d", &b);
	
	x = a+b;
	
	if (x >= 10)
		r = x + 5;
	else
		r = x - 7;
		
	printf("%d", r);
	
}
