#include <stdio.h>

int main () {
	int altura, largura;
	scanf ("%i%i", &largura, &altura);
	printf ("%iKw/m2", largura*altura*18);
	return 0;
}
