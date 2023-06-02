#include <stdio.h>
#include <locale.h>
int main()
{
	int numero;
	setlocale(LC_ALL,"portuguese");
	printf("informe um número entre 1 e 3: ");
	scanf("%d",&numero);
	switch (numero)
	{
		case 1:
			printf("Você digitou o 1.");
			break;
		case 2:
			printf("Você digitou o 2.");
			break;
		case 3:
			printf("Você digitou o 3.");
			break;
		defaut:
		printf("Você digitou um número inválido!");
					
	}
	getchar();
	return 0;
}