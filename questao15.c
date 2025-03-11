#include <stdio.h>

int main () {
	float conta1, conta2, salario;
	scanf ("%f%f", &conta1, &conta2);
	scanf ("%f", &salario);
	printf ("%0.2f", salario-1.02*(conta1+conta2));
	return 0;	
}
