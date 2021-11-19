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
	void push(int no)   //insertFirst
	{
		PNODE newn=new NODE;

		newn->data=no;
		newn->next=NULL;

		if(first==NULL)
		{
			first==newn;
		}
		else
		{
			newn->next=first;
			first=newn;
		}
		size++;
	}

	int pop()  //DeleteFirst()
	{
		int no=0;
		PNODE temp=first;
		/*if(first==NULL)*/if(size==0)
		{
			cout<<"stact is empty\n";
			return -1;
		}

		/*if(first->next==NULL)*/ if(size==1)
		{
			no=first->data;
			delete first;
			first=NULL;
		}
		else
		{
			no=first->data;
			first=first->next;
			delete temp;
		}

		size--;
		return no;
	}

	void Display()
	{
		PNODE temp=first;
		while(temp!=NULL)
		{
			cout<<"|"<<temp->data<<"|"<<"\n";
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
	obj.push(101);
	//obj.push(101);
	
	obj.Display();

	int iret=obj.pop();
	cout<<"poped element is:"<<iret<<"\n";
	//obj.pop();

	cout<<"Elements of stack:\n";
	obj.Display();
	iret=obj.Count();

	cout<<"size of stack is :"<<iret<<"\n";

	return 0;
}