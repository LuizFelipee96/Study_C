#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	float notas[2];
	printf("Insira sua primeira nota: ");
	scanf("%f", &notas[0]);
	printf("Insira sua segunda nota: ");
	scanf("%f", &notas[1]);
	printf("\nSua m�dia �: %2f", (notas[0] + notas[1])/2);
	return 0;
}