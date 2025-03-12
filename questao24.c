#include <stdio.h>

int main () {
	float money;
	scanf ("%f", &money);
	printf ("U$ %0.2f\nGB %0.2f\n£ %0.2f", money*1.8, money*2, money*3.57);
	return 0;
}
