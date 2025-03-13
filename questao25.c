#include <stdio.h> 

int main () {
	int hora, minuto;
	scanf ("%i%i", &hora, &minuto);
	printf ("%i\n%i\n%i",hora*60, hora*60+minuto, minuto*60);
	return 0;
}
