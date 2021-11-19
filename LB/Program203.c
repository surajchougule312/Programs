#include<stdio.h>
#include<shtdlib.h>

sruct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef strct node ** PPNODE;

int main()
{
	PNODE p=NULL;
	PPNODE q=NULL;

	p=(PNODE)malloc(sizeof(NODE));
	q=&p;

	return 0;
}
