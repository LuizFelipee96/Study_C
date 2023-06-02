#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 3
//==============================================================
int dado [MAX], qtd,op,i;
//==============================================================
int inserir(void) //PUSH
{
	if (qtd == MAX)
		printf("A pilha esta cheia!\n\n");
	else
	{
	for(i=qtd;i>0;i--)
		dado[i] = dado [i-1];
	printf("Digite o valor para entrar na lista: ");
	scanf("%d",&dado[0]);
	printf ("\n%d armazenado em %d\n\n", dado[0],0);
	qtd ++;
    }
	return 0;
}
//==============================================================
int remover(void) //POP
{
	if (qtd == 0)
		printf("A pilha esta vazia \n\n");
	else
	{
		qtd--;
		printf("Elemento %d removido\n", dado[0]);
		for (i=0;i<qtd;i++)
			dado[i] = dado[i+1];
		dado[i] = 0;
	}
	return 0;
}
//==============================================================
int main(void)
{
	qtd = 0;
	while (op!=4)
	{
		menu();
		system("pause");
	}
	return 0;
}





//==============================================================
int exibir(void)
{
	if (qtd == 0)
		printf("A pilha esta vazia!\n\n");
	else
	{
		for(i=0;i<qtd-1;i++)
			printf("Posição %d --> %d\n\n",i,dado[i]);
	}
	return 0;
}
//==============================================================

int menu (void)
{
	system("cls");
	printf("===========================\n");
	printf("         FILA              \n");
	printf("===========================\n");
	printf("      	1- Inserir         \n");
	printf("      	2- Remover         \n");
	printf("      	3- Exibir          \n");
	printf("      	4- Sair            \n");
	printf("===========================\n");
	printf("Selecione sua opção: ");
	scanf("%d",&op);
	system("cls");
	switch (op)
	{
		case 1: inserir();
			break;
		case 2: remover();
			break;
		case 3: exibir();
			break;
	}
	return 0;
}