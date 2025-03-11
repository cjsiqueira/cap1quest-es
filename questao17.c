#include <stdio.h>
#include <math.h>
#define PI 3.14

int main () {
	float raio;
	scanf ("%f", &raio);
	printf ("%0.2f, %0.2f, %0.2f", 2*PI*raio, PI*pow(raio, 2), 3*PI*pow(raio,3)/4 );
	return 0;	
}
