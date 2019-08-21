#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	//Dá pra usar DEFINE, const ou enum pra registrar constantes
	const float pi = 3.1415926535;
	float r = 0,
		  a = 0;
		
	printf("Raio do circulo: ");
	scanf("%f", &r);
	
	a = pi * pow(r, 2);
	
	printf("Area do circulo: %f", a);
	
	return 0;
}
