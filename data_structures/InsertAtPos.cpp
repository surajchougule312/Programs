#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class SL
{
private:
	PNODE first;
	int size;
public:
	SL();
	void InsertAtPos(int,int);
	void Display();
	int Count();

};
SL::SL()
{
	first=NULL;
	size=0;
}

void SL::InsertAtPos(int no,int iPos)
{
	PNODE newn=new NODE;
	PNODE temp=first;

	newn->data=no;
	newn->next=NULL;

	if((iPos<1) || (iPos>size+1))
	{
		return ;
	}
	if(iPos==1)
	{
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
	else if(iPos==size+1)
	{
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
			size++;
		}
	}
	else
	{
		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
		size++;
	}
}

void SL::Display()
{
	PNODE temp=first;
	while(temp!=NULL)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
}

int SL::Count()
{
	return size;
}

int main()
{
	SL obj;
	obj.InsertAtPos(10,1);
	
	obj.InsertAtPos(20,2);
	obj.InsertAtPos(30,3);
	obj.InsertAtPos(100,2);
	obj.Display();
	cout<<"\n";
	int iRet=obj.Count();
	cout<<"count is:"<<iRet<<"\n";
	return 0;

}