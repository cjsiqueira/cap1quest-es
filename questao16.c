#include <stdio.h>
#include <math.h>

int main () {
	float cateto1, cateto2, hipotenusa;
	scanf("%f%f", &cateto1, &cateto2); //recebe os catetos;
	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); //calcula a hipotenusa utilizando a biblioteca math.h;
	printf ("%0.2f", hipotenusa);
	return 0;	
}
