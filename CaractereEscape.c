#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("Ol� Pernambuco! \n");
	printf("Ol� Recife! \n");
	getchar();
	return 0;
}