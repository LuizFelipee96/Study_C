#include <stdio.h>
#include <locale.h>
int main()
{
	int numero;
	setlocale(LC_ALL,"portuguese");
	printf("Informe o número entre 1 e 3: ");
	scanf("%d",&numero);
	switch (numero)
	{
		case 1:
			printf("Você digitou o numero 1: ");
			break;
		case 2:
			printf("Você digitou o numero 2: ");
			break;
		case 3:
			printf("Você digitou o numero 3: ");
			break;
		default:
			printf("Você digitou um numero inválido! ");
			break;
	}
	getchar();
	return 0;
}
