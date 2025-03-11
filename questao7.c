#include <stdio.h>

int main () {
	float peso;
	scanf ("%f", &peso);
	printf ("%0.2f", peso*1.15);
	printf ("\n%0.2f", peso*0.90);
	return 0;
}
