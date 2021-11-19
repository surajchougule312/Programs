#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

class SignlyLL
{
private:
	PNODE first;
	int size;

public:
	SignlyLL()
	{
		first=NULL;
		size=0;
	}

	void InsertFirst(int no)
	{
		PNODE newn=new NODE; 

		newn->data=no;
		newn->next=NULL;

		if(first==NULL)
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
		PNODE temp=first;
		newn->data=no;
		newn->next=NULL;

		if(first==NULL)
		{
			first=newn;
		}
		else
		{
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
		size++;
	}
	void InsertAtPos(int no, int ipos)
	{}
	void DeleteFirst()
	{
		PNODE temp=first;

		if(first!=NULL)
		{
			first=first->next;
			delete(temp);

			size--;
		}
	}
	void DeleteLast()
	{
		PNODE temp=first;
		if(first==NULL)
		{
			return;
		}
		else if(first->next==NULL)
		{
			delete first;
			first=NULL;
			size--;
		}
		else
		{
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;

			size--;
		}
	}
	void DeleteAtPos(int ipos)
	{}
	void Display()
	{
		PNODE temp=first;

		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
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
	SignlyLL obj;
	int iret=0;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.InsertLast(101);
	obj.InsertLast(111);

	obj.DeleteLast();
	obj.Display();

	iret=obj.Count();
	cout<<"Number of elemets are:"<<iret<<"\n";

	return 0;
}