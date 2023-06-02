#include <stdio.h>
#include <locale.h>

int main ()
{
	int base;
	int altura;
	int area;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor da base:");
	scanf("%i", &base);
	
	printf("Digite o valor da altura:");
	scanf("%i", &altura);
	
	area = base * altura;
	
	printf("O valor da area do retangulo é = %i\n", area);
	
	return 0;
}