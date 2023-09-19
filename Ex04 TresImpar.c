#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");

	//int multitres;

	for (int i = 1; i <= 5; i++)
	{
		printf ("%d\n", i * 3);
	}

	printf ("\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}