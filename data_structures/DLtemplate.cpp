#include<iostream>
using namespace std;

template<class T>
 struct node
{
	T data;
	struct node * next;
	struct node * prev;
};

template <class T>
class DoublyL
{
private:

	node<T>* first;
	node<T>* last;
	int size;

public:
	DoublyL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T, int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int Count();
};

template<class T>
 DoublyL<T>:: DoublyL()
	{
		first=NULL;
		last=NULL;
		size=0;
	}
	template<class T>
	void DoublyL<T>::InsertFirst(T no)
{
	node<T>* newn=new node<T>;

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

template<class T>
void DoublyL<T>::InsertLast(T no)
{
	node<T>* newn=new node<T>;

	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if((first==NULL) &&(last==NULL))
	{
		first=newn;
	}
	else
	{
		node<T>* temp=first;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}
	size++;
}

template<class T>
void DoublyL<T>::InsertAtPos(T no, int iPos)
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
		node<T>* newn=new node<T>;

		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;

		node<T>* temp=first;

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
template<class T>
void DoublyL<T>::DeleteFirst()
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
		node<T>* temp=first;

		first=first->next;
		delete temp;
		first->prev=NULL;
	}
	size--;

}
template<class T>
void DoublyL<T>::DeleteLast()
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
		node<T>* temp=first;

		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;;

	}
	size--;
}

template<class T>
void DoublyL<T>::DeleteAtPos(int iPos)
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
		node<T>* temp=first;

		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		delete temp->next->prev;
		temp->next->prev=temp;
		size--;
	}
}
template<class T>
void DoublyL<T>::Display()
{
	node<T>* temp=first;

	for(int i=1;i<=size;i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<"\n";

}
template<class T>
int DoublyL<T>::Count()
{
	return size;
}

int main()
{
	DoublyL <int>obj;
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