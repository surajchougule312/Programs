#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head,PNODE Tail)
{
	if((Head==NULL) && (Tail==NULL))
	{
		return;
	}

	do
	{
		printf("|%d|->",Head->data);
		Head=Head->next;

	}while(Head!=Tail->next);
	printf("\n");
}
int Count(PNODE Head,PNODE Tail)
{
	if((Head==NULL) && (Tail==NULL))
	{
		return 0;
	}
	int iCnt=0;
	do
	{
		iCnt++;
		Head=Head->next;

	}while(Head!=Tail->next);
	return iCnt;
	
}

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=no;
	newn->next=NULL;

	if((*Head==NULL) && (*Tail==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else 
	{
		newn->next=*Head;
		*Head=newn;

	}
	(*Tail)->next=*Head;  //to maintain circuler nature
}
void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=no;
	newn->next=NULL;

	if((*Head==NULL) && (*Tail==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else 
	{
		(*Tail)->next=newn;
		*Tail=newn;

	}
	(*Tail)->next=*Head;  //to maintain circuler nature
}
void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int iPos)
{
	int size=Count(*Head,*Tail);
	
	
	
	if(iPos==1)
	{
		InsertFirst(Head,Tail,no);
	}
	else if(iPos==size+1)
	{
		InsertLast(Head,Tail,no);
	}
	else
	{
		PNODE newn=NULL;
		PNODE temp=*Head;
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=no;
		newn->next=NULL;
		int i=0;

		for(i=1;i<iPos-1;i++)
		{
			temp=(temp)->next;
		}
		newn=temp->next;
		(temp)->next=newn;
		//(*Tail)->next=*Head;
	}



}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		*Head=(*Head)->next;
		free((*Tail)->next);
		(*Tail)->next=*Head;
	}

}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp=*Head;
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		while(temp->next!=*Tail)
		{
			temp=temp->next;
		}
		free(*Tail);  //free((temp)->next)
		*Tail=temp;
		(*Tail)->next=*Head;
		
	}
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{}

int main()
{
	PNODE first=NULL;
	PNODE last=NULL;
	int iret=0;

	InsertFirst(&first,&last,51);
	InsertFirst(&first,&last,21);
	InsertFirst(&first,&last,11);

	InsertLast(&first,&last,101);
	InsertLast(&first,&last,111);

	InsertAtPos(&first,&last,55,5);

	Display(first,last);
	iret=Count(first,last);
	printf("Number of elements are : %d\n",iret);

	DeleteFirst(&first,&last);
	DeleteLast(&first,&last);

	Display(first,last);
	iret=Count(first,last);
	printf("Number of elements are : %d",iret);


	return 0;
}