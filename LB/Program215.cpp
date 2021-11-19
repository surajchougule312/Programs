#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class stack      //singly linear linked list
{
private:
	PNODE first;
	int size;
public:

	stack()
	{
		first=NULL;
		size=0;
	}
	void push(int no)   //insetLast
	{
		PNODE temp=first;
		PNODE newn=new NODE;

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

	void pop()  //DeleteLast()
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

	void Display()
	{
		PNODE temp=first;
		while(temp!=NULL)
		{
			cout<<"|"<<temp->data<<"|->"<<"\t";
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
	stack obj;

	obj.push(11);
	obj.push(21);
	obj.push(55);
	obj.push(111);
	obj.push(101);
	

	//int iret=obj.pop();
	//cout<<iret;
	//obj.pop();

	obj.Display();
	int iret=obj.Count();
	cout<<"size of stack is :"<<iret<<"\n";

	return 0;
}