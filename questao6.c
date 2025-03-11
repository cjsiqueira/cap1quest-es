#include <stdio.h>

int main () {
	float sal_base, valor_vendas, comissao;
	scanf ("%f", &sal_base);
	scanf ("%f", &valor_vendas);
	comissao = valor_vendas * 0.04;
	printf ("Salario: %0.2fR$, Vendas: %0.2fR$, Comissao: %0.2fR$, Salario total: %0.2fR$", sal_base, valor_vendas, comissao, sal_base + comissao );
	return 0;
}
