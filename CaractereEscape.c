#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("Olá Pernambuco! \n");
	printf("Olá Recife! \n");
	getchar();
	return 0;
}