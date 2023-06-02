#include <stdio.h> // biblioteca padrão para comandos i/o
#include <stdlib.h> //necessário para o system "pause'=!
#include <math.h> //necessário para o "fmod"
int main(void)
{
	int a=10, b=3;
	float c=10, d=3.0;
	printf("(Multiplicacao) => %d * %d = %d \n", a, b, a * b);
	printf("(Divisao) => %d / %d = %d \n", a, b, a / b);
	printf("(adicao) => %d + %d = %d \n", a, b, a + b);
	printf("(subtracao) => %d - %d = %d \n", a, b, a - b);
	printf("(resto) => %d % %d = %d \n", a, b, a % b);
	printf("(resto com reais) => fmod(%.lf,%.lf) = %.lf\esdwn", c, d, fmod(c,d));
	printf("(potenciacao) => pow(%d,2) = %.f\n",a,pow(a,2));
	printf("\n");
	system("pause");
}