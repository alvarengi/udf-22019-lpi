#include <stdio.h>

main()
{
float salario;
printf("Qual o Salário ");
scanf("%f", &salario);
if (salario < 5000)
	salario = salario+1000;
printf("Salário Final: %.2f\n", salario);
}