#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int saida = 0;  //usado para determinar a saída do programa.
	int ERR = 0;    //ERROR | usado quando algum valor incorreto for inserído.
	
	//valor usado para determinar a escolha do usuário.	
	int mouse;
	char mouse_letra;

	float salario;

	int usuarios = 0;
	int usuarios_selecionados = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("===||Cadastro de cidadão||===\n\n");
	do
	{
		int sexo_masculino = 0, sexo_feminino = 0;
		int olho_azul = 0, olho_verde = 0, olho_castanho = 0, olhos_preto = 0;
		int cabelo_loiro = 0, cabelo_castanho = 0, cabelo_preto = 0, cabelo_ruivo = 0;
		int idade, idade_jovem = 0, idade_adulto_jovem = 0, idade_adulto_meia = 0, idade_idoso = 0;

		printf("##Por favor, digite suas informações ao que é pedido!##\n");
		do
		{
			ERR = 0;
			printf ("\nInsire seus anos de vida.\n =|> ");
			scanf ("%d", &idade);
			
			if (idade == -1) {saida = 1;}
			else if (idade < 10 || idade > 100)
			{
				printf ("\n!!!IDADE INVÁLIDA TENTE NOVAMENTE!!!\n");
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
					printf ("\n!!!VALOR INVÁLIDO TENTE NOVAMENTE!!!\n");
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
					printf ("\n!!!VALOR INVÁLIDO TENTE NOVAMENTE!!!\n");
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
					printf ("\n!!!VALOR INVÁLIDO TENTE NOVAMENTE!!!\n\n");
					ERR = 1;
			}
			fflush(stdin);
		} while (ERR != 0);

		do
		{
			ERR = 0;
			printf ("\nInsira o seu salário atual. \n =|> "); scanf ("%f", &salario);
			if (salario < 0)
			{
				printf ("\n!!!SALÁRIO INVÁLIDO || NÃO SÃO ACEITOS VALORES NEGATIVOS!!!\n\n");
				ERR = 1;
			}
			
		} while (ERR != 0);

		//Finalmente acrescenta o número do usuário.		
		usuarios++; 
		//Checa se o usuario tem as características pedidas.
		if (idade_adulto_jovem > 0 && sexo_feminino > 0 && olho_castanho > 0 && cabelo_castanho > 0) {usuarios_selecionados++;}
		printf ("\nCadastro %d finalizado!\n\n", usuarios);


	} while (0 == 0);

	if (usuarios <= 0)
	{
		printf ("\n!!!DATA INSUFICIENTE || NÃO A USUARIOS CADASTRADOS!!!\n\n");
		exit (0);
	}
	/*
	while (idade_adulto_jovem > 0 && sexo_feminino > 0 && olho_castanho > 0 && cabelo_castanho > 0)
	{
			idade_adulto_jovem--;
			sexo_feminino--;				este codigo fazia parte de uma logica quebrada e invalida.
			olho_castanho--;				NÃO REPITA OQ EU FIZ AKI!!
			cabelo_castanho--;
			usuarios_selecionados++;
	}
	*/
	float porcentagem_selecionados = (usuarios_selecionados * 100) / usuarios; //Calculo de razão.
	printf ("\nCadastros finalizados!\n\nPorcentagem de Usuários específicados: %.2f%%", porcentagem_selecionados);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}