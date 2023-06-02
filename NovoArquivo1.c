#include <stdio.h>
int main(void)
{
	int i, *vetor;
	//=====================================
	vetor = (int *) calloc(5.sizeof(int));
	for (i=0;i<5;i++)
		vetor[i]=1;
	//=======================================
	vetor = (int *) realloc(vetor,10 * sizeof(int));
	for (i=5;i<10;i++)
		vetor[i]=i;
	//=========================================
	for (i=0;m)
}