#include <stdio.h>
#define sal_minimo 1412 // salário atualmente;;
int main () {
	float salario;
	scanf ("%f", &salario);
	printf ("%0.2f", salario/sal_minimo);
	return 0;
}
