#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int saida = 0;  //usado para determinar a sa�da do programa.
	int ERR = 0;    //ERROR | usado quando algum valor incorreto for inser�do.
	
	//valor usado para determinar a escolha do usu�rio.	
	int mouse;
	char mouse_letra;

	float salario;

	int usuarios = 0;
	int usuarios_selecionados = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("===||Cadastro de cidad�o||===\n\n");
	do
	{
		int sexo_masculino = 0, sexo_feminino = 0;
		int olho_azul = 0, olho_verde = 0, olho_castanho = 0, olhos_preto = 0;
		int cabelo_loiro = 0, cabelo_castanho = 0, cabelo_preto = 0, cabelo_ruivo = 0;
		int idade, idade_jovem = 0, idade_adulto_jovem = 0, idade_adulto_meia = 0, idade_idoso = 0;

		printf("##Por favor, digite suas informa��es ao que � pedido!##\n");
		do
		{
			ERR = 0;
			printf ("\nInsire seus anos de vida.\n =|> ");
			scanf ("%d", &idade);
			
			if (idade == -1) {saida = 1;}
			else if (idade < 10 || idade > 100)
			{
				printf ("\n!!!IDADE INV�LIDA TENTE NOVAMENTE!!!\n");
				ERR = 1;
			}
			else if (idade <= 17)   {idade_jovem++;}		  //Idade entre 10 a 17.
			else if (idade <= 34)   {idade_adulto_jovem++;} //Idade entre 18 a 34.
			else if (idade <= 59)   {idade_adulto_meia++;}  //Idade entre 35 a 59.
			else if (idade <= 100)  {idade_idoso++;}		  //Idade entre 60 a 100.

			

		} while (ERR != 0); //Loop caso houve algum erro.

		if (saida != 0) {break;}

		fflush(stdin); // limpa a memoria guardada pelo teclado.

		do
		{
			ERR = 0;
			printf ("\nInsire o seu Sexo.\n Masculino: m\n Feminino: f\n =|> "); scanf ("%c", &mouse_letra);
			switch (mouse_letra)
			{
				case 'm':case 'M':
					sexo_masculino++;
					break;
				case 'f':case 'F':
					sexo_feminino++;
					break;
				default:
					printf ("\n!!!VALOR INV�LIDO TENTE NOVAMENTE!!!\n");
					ERR = 1;
			}
			fflush(stdin);
		} while (ERR != 0);

		do
		{
			ERR = 0;
			printf ("\nInsire a cor dos seus Olhos.\n Azul: a\n Verde: v\n Castanho: c\n Preto: p\n =|> "); scanf ("%c", &mouse_letra);
			switch (mouse_letra)
			{
				case 'a':case 'A':
					olho_azul++;
					break;
				case 'v':case 'V':
					olho_verde++;
					break;
				case 'c':case 'C':
					olho_castanho++;
					break;
				case 'p':case 'P':
					olhos_preto++;
					break;
				default:
					printf ("\n!!!VALOR INV�LIDO TENTE NOVAMENTE!!!\n");
					ERR = 1;
			}
			fflush(stdin);
		} while (ERR != 0);

		do
		{
			ERR = 0;
			printf ("\nInsira a cor do seu Cabelo.\n Loiro: l\n Castanho: c\n Preto: p\n Ruivo: r\n =|> "); scanf ("%c", &mouse_letra);
			switch (mouse_letra)
			{
				case 'l':case 'L':
					cabelo_loiro++;
					break;
				case 'c':case 'C':
					cabelo_castanho++;
					break;
				case 'p':case 'P':
					cabelo_preto++;
					break;
				case 'r':case 'R':
					cabelo_ruivo++;
					break;
				default:
					printf ("\n!!!VALOR INV�LIDO TENTE NOVAMENTE!!!\n\n");
					ERR = 1;
			}
			fflush(stdin);
		} while (ERR != 0);

		do
		{
			ERR = 0;
			printf ("\nInsira o seu sal�rio atual. \n =|> "); scanf ("%f", &salario);
			if (salario < 0)
			{
				printf ("\n!!!SAL�RIO INV�LIDO || N�O S�O ACEITOS VALORES NEGATIVOS!!!\n\n");
				ERR = 1;
			}
			
		} while (ERR != 0);

		//Finalmente acrescenta o n�mero do usu�rio.		
		usuarios++; 
		//Checa se o usuario tem as caracter�sticas pedidas.
		if (idade_adulto_jovem > 0 && sexo_feminino > 0 && olho_castanho > 0 && cabelo_castanho > 0) {usuarios_selecionados++;}
		printf ("\nCadastro %d finalizado!\n\n", usuarios);


	} while (0 == 0);

	if (usuarios <= 0)
	{
		printf ("\n!!!DATA INSUFICIENTE || N�O A USUARIOS CADASTRADOS!!!\n\n");
		exit (0);
	}
	/*
	while (idade_adulto_jovem > 0 && sexo_feminino > 0 && olho_castanho > 0 && cabelo_castanho > 0)
	{
			idade_adulto_jovem--;
			sexo_feminino--;				este codigo fazia parte de uma logica quebrada e invalida.
			olho_castanho--;				N�O REPITA OQ EU FIZ AKI!!
			cabelo_castanho--;
			usuarios_selecionados++;
	}
	*/
	float porcentagem_selecionados = (usuarios_selecionados * 100) / usuarios; //Calculo de raz�o.
	printf ("\nCadastros finalizados!\n\nPorcentagem de Usu�rios espec�ficados: %.2f%%", porcentagem_selecionados);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}