#include <stdio.h>
#define COMISSAO 0.3
int main()
{
	double venda;
	printf("Digite o valor da venda: ");
	scanf("%lf",&venda);
	printf("Comissao = %2lf \n", venda*COMISSAO);
	return 0;
}