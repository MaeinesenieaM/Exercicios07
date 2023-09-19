#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int repetir = 0;
	int codigo; //codigo da fruta.
	int quantidade;
	float valor [] = {5.00, 1.00, 4.00}; //
	float pagar = 0; 

	int ERR = 0; //ERROR

	setlocale (LC_ALL, "Portuguese");

	printf ("--**Fruteiro**--\n");

	do 
	{
		printf (" 1 - Abacaxi R$5,00\n 2 - Maçã    R$1,00\n 3 - Pera    R$4,00\n\n");
		do 
		{
			printf (" Insira a comida desejada: "); scanf ("%d", &codigo);			
			printf (" Agora digite a quantidade: "); scanf ("%d", &quantidade);

			ERR = 0;
			switch (codigo)
			{
				case 1:
					pagar += valor [0] * quantidade;
					break;
				case 2:
					pagar += valor [1] * quantidade;
					break;
				case 3:
					pagar += valor [2] * quantidade;
					break;
				default:
					printf ("!!Codigo irreconhecível, tente denovo.!!\n\n");
					ERR = 1;
			} 
		}	
		while (ERR == 1);

		printf ("\n Valor atual: R$%.2f\n\n Deseja mais alguma coisa?\n1: Sim\n0: Não\n\n#: ", pagar); scanf ("%d",&repetir);
	}	
	while (repetir != 0);

	printf ("\n O Valor total: R$%.2f", pagar);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}