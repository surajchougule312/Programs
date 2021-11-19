#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class Queue      //singly linear linked list
{
private:
	PNODE first;
	int size;
public:

	Queue()
	{
		first=NULL;
		size=0;
	}
	void Enqueue(int no)   //insertlast
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

	void Dequeue()  //DeleteFirst()
	{
		PNODE temp=first;

		if(temp!=NULL)
		{
			first=first->next;
			delete temp;
			size --;
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
	Queue obj;

	obj.Enqueue(11);
	obj.Enqueue(21);
	obj.Enqueue(55);
	obj.Enqueue(101);
	obj.Enqueue(111);

	//int iret=obj.Dequeue();
	//cout<<iret;
	obj.Dequeue();
	obj.Display();
	int iret=obj.Count();
	cout<<"size of stack is :"<<iret<<"\n";

	return 0;
}