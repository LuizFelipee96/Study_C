#include <stdio.h>
#include <locale.h>
int main()
{
	int numero;
	setlocale(LC_ALL,"portuguese");
	printf("Informe o n�mero entre 1 e 3: ");
	scanf("%d",&numero);
	switch (numero)
	{
		case 1:
			printf("Voc� digitou o numero 1: ");
			break;
		case 2:
			printf("Voc� digitou o numero 2: ");
			break;
		case 3:
			printf("Voc� digitou o numero 3: ");
			break;
		default:
			printf("Voc� digitou um numero inv�lido! ");
			break;
	}
	getchar();
	return 0;
}
