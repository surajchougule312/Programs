#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node * next;
	struct node * prev;
}NODE,*PNODE;

class DoublyL
{
private:

	PNODE first;
	PNODE last;
	int size;

public:
	DoublyL()
	{
		first=NULL;
		last=NULL;
		size=0;
	}
	void InsertFirst(int no)
{
	PNODE newn=new NODE;

	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if((first == NULL) && (last == NULL))
	{
		first=newn;
	}
	else
	{
		newn->next=first;
		first=newn;
	}
	size++;

}
void InsertLast(int no)
{
	PNODE newn=new NODE;

	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if((first==NULL) &&(last==NULL))
	{
		first=newn;
	}
	else
	{
		PNODE temp=first;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}
	size++;
}

void InsertAtPos(int no, int iPos)
{
	if((iPos<1) || (iPos>size+1))
	{
		return;
	}

	if(iPos==1)
	{
		InsertFirst(no);
	}
	else if(iPos==size+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE newn=new NODE;

		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;

		PNODE temp=first;

		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		newn->prev=temp->next;
		temp->next=newn;
		newn->next=newn->prev;
		size++;
	}
}
void DeleteFirst()
{
	if((first==NULL) && (last==NULL))
	{
		return ;

	}


	if(first->next==NULL)
	{
		delete first;
		first=NULL;
	}
	else
	{
		PNODE temp=first;

		first=first->next;
		delete temp;
		first->prev=NULL;
	}
	size--;

}
void DeleteLast()
{
	if((first==NULL) && (last==NULL))
	{
		return;
	}
	if(first->next==NULL)
	{
		delete first;
		first=NULL;
	}
	else
	{
		PNODE temp=first;

		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;;

	}
	size--;
}

void DeleteAtPos(int iPos)
{
	if((iPos<1) || (iPos>size))
	{
		return;
	}

	if(iPos==1)
	{
		DeleteFirst();
	}
	else if(iPos==size)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=first;

		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		delete temp->next->prev;
		temp->next->prev=temp;
	}
}
void Display()
{
	PNODE temp=first;

	for(int i=1;i<=size;i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<"\n";

}
int Count()
{
	return size;
}

};


int main()
{
	DoublyL obj;
	obj.InsertFirst(10);
	obj.InsertFirst(20);
	obj.InsertFirst(30);
	obj.InsertLast(40);
	obj.InsertAtPos(60,3);
	obj.InsertAtPos(100,6);
	obj.Display();

	int iret=obj.Count();
	cout<<"count is : "<<iret<<"\n";

	obj.DeleteFirst();
	obj.DeleteLast();
	obj.DeleteAtPos(4);

	obj.Display();

	iret=obj.Count();
	cout<<"count is : "<<iret<<"\n";



	return 0;
}