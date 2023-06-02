#include <stdio.h>
int main()
{
	int i=1, numero=0, soma=0;
	while (i < 6)
	{
		printf("Informe o valor %i : ", i);
		scanf("%i",&numero);
		soma += numero;
		i++;
	}
	printf("\Soma dos valores: %i\n\n",soma);
	return 0;	
}