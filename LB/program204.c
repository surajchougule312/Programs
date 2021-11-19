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
	PNODEfirst=NULL;

	fun(first);

	gun(&first);

	return 0;
}
