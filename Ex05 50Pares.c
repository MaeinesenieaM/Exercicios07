#include <stdio.h>
#include <locale.h>

int main ()
{
	//Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.
	
	setlocale (LC_ALL, "Portuguese");

	int somapar = 0;

	for (int i = 0; i < 50; i++)
	{
		somapar += 2 * i;
	}

	printf ("\nA soma dos primeiros '50' n�meros pares: %d\n", somapar);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}