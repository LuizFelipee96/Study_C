#include<stdio.h>
int main()
{
	char dia[7][4]={"DOM","SEG","TER","QUA","QUI","SEX","SAB"};
	printf("Dia: %s\n",dia[3]);
	return 0;
}

#include<stdio.h>
int dia()
{
	char dia[][4]={"DOM","SEG","TER","QUA","QUI","SEX","SAB"};
	printf("Dia: %s\n",dia[3]);
	return 0;
}
