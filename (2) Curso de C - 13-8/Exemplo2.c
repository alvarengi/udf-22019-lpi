#include <stdio.h>

int main() {
	int a = 17,
		b = 3;
		
	int x,
		y;
		
	float z = 17,
		z1,
		z2;
	
	x = a / b;
	y = a % b;
	z1 = z / b;
	z2 = a / b;
	a++;
	b--;
	
	printf("x: %i, y: %i, z1: %f, z2: %f, a: %i, b: %i", x, y, z1, z2, a, b);
}
