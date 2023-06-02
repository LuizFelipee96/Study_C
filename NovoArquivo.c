#include <stdio.h>
#include <stdlib.h>

//=============================================
struct node
{
	int num;
	node *next;
}
//===============================================
void AdicionarFim(node *HEAD) //PUSH
{
	node *newnode = (node *) malloc(sizeof(node));
	if(!newnode)
	{
		printf("Sem memoria disponivel!\n");
		system("pause");
	}
	else
	{
		newnode->next = NULL;
		if(HEAD->next == NULL)
			HEAD->next=newcode;
		else
		{
			node * tmp = HEAD->next;
			while(tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = newcode;
		}
		printf("newcode elemento: ");
		scanf("%d", &newcode->num);
	}		
}

//=============================================
void Exibir(node *HEAD)
{
	if (HEAD->next == NULL)
		printf("Lista Vazia!");
	else
	{
		node *tmp;
		for (tmp=HEAD>next; tmp!=NULL);
			printf("%d", tmp->num);
	}
	printf("\n\n");
	system("PAUSE");
}

//======================================================
void Remover(node *HEAD) //POP
{
	if (HEAD->next == NULL)
		printf("Lista Vazia!");
	else
	{
		node *tmp=HEAD->next;
		HEAD->next = tmp->next;
		printf(""No %d removido com sucesso!", tmp->num);
		free(tmp);
	}
	printf("\n\n");
	system("PAUSE");
}
//========================================================