#include <stdio.h>
int f1()
{
	int x = 5;
	printf("Valor de x: %i\n", x);
	return 0;
}
int main()
{
	int x=10;
	f1();
	printf("Valor de x: %i\n", x);
	return 0;
}