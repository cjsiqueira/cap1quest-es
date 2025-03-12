#include <stdio.h> 

int main () {
	float angulo1, angulo2;
	scanf ("%f%f", &angulo1, &angulo2);
	angulo1 += angulo2; // soma os valores dos ângulos.
	printf ("%0.2f", 180-angulo1);
	return 0;
}
