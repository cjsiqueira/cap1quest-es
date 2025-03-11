#include <stdio.h>

int main () {
	int num, contador;
	scanf ("%i", &num);
	for (contador = 1; contador <= 10; contador+=1)
		printf ("\n%i x %i = %i", contador, num, contador * num);
	return 0;	
}
