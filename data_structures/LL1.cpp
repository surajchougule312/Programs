#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

class LL
{
private:
	PNODE first;
	int size;

public:
	LL()
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
	{PNODE newn=new NODE;
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
	void DeleteFisrt()
	{
		PNODE temp=first;

		if(temp!=NULL)
		{
			first=first->next;
			delete temp;
			size --;
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

	void InsertAtPos(int no,int iPos)
	{
		PNODE temp=first;
		int i=0;

		if(iPos<1 ||iPos>size+1)
		{
			cout<<"Invalid Position\n";
		}

		if(iPos==1)
		{
			InsertFirst(no);
			size++;
		}
		else if(iPos==size+1)
		{
			InsertLast(no);
			size ++;
		}
		else
		{
			PNODE newn=new NODE;

			newn->data=no;
			newn->next=NULL;

			for(i=1;i<iPos-1;i++)
			{
				temp=temp->next;
			}
			newn->next=temp->next;
			temp->next=newn;
			size++;
		}
	}

	void DeleteAtPos(int iPos)
	{
		PNODE temp=first;
		int i=0;

		if(iPos<1 || iPos>size)
		{
			cout<<"Invalid position\n";
			return ;
		}
		if(iPos==1)
		{
			DeleteFisrt();
			size--;
		}
		else if(iPos==size)
		{
			DeleteLast();
			size--;
		}
		else
		{
			PNODE targeted=NULL;
			for(i=1;i<iPos-1;i++)
			{
				temp=temp->next;
			}
			targeted=temp->next;
			temp->next=targeted->next;
			delete targeted;
			size--;

		}

	}
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
	LL obj;
	int iRet=0;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.InsertAtPos(30,3);

	obj.InsertLast(101);
	obj.InsertLast(111);

	obj.Display();
	iRet=obj.Count();
	cout<<"count is: "<<iRet<<"\n";


	//obj.DeleteFisrt();
	//obj.DeleteLast();
	obj.DeleteAtPos(3);

	obj.Display();
	iRet=obj.Count();
	cout<<"Count is: "<<iRet<<"\n";
	return 0;
}