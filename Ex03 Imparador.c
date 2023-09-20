#include <stdio.h>
#include <locale.h>

int main ()
{
	int N; //Quantidade desejada.

	setlocale (LC_ALL, "Portuguese");

	printf ("^-^Imparador^-^\n\n");
	printf ("Insira a quantidade de números a serem mostrados: "); scanf("%d", &N);

	/*
	struct bin
	{
		unsigned int im : 1;
	} Bin;
	*/

	printf ("\n=#\n");
	for (int i = 1; i <= N; i++)
	{
		//Bin.im = (i % 2) - 1;
		int imp = (i * 2) - 1;
		//int numimpar = Bin.im + i;
		printf (" %d\n", imp);
	}
	printf ("=#");

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;	
}