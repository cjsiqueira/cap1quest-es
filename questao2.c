#include <stdio.h>

int main () {
	int contador, num, mult;
	for (contador = 1; contador <= 3; contador++)	{
		scanf ("%i", &mult);
		num *= mult; }
	printf ("%i", num);
	return 0;	
}
