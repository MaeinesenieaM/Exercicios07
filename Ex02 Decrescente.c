#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int N; //Número limite.
	setlocale (LC_ALL, "Portuguese");

	printf ("--->Decrescente<---\n\n");
	printf ("Insira a quantidade de números a serem mostrados: "); scanf("%d", &N);

	printf ("\n##\n");
	for (int i = N; i >= 0; i--)
	{
		printf (" %d\n", i);
	}
	printf ("##");

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}