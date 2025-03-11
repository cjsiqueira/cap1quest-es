#include <stdio.h>

int main () {
	int base_maior, base_menor, altura;
	scanf("%i%i%i", &base_maior, &base_menor, &altura);
	printf ("%i", (base_maior + base_menor)*altura/2);
	return 0;	
	
}
