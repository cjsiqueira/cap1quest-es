#include <stdio.h>
#define ano_atual 2025

int main () {
	int ano_nascimento, idade;
	scanf ("%i", &ano_nascimento);
	idade = ano_atual - ano_nascimento;
	printf ("ANOS: %i; DIAS: %i; SEMANAS: %i; MESES: %i",idade, idade*365, idade*48, idade*12);
	return 0;	
}
