#include<iostream>
using namespace std;

template <typename T>      //template header
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class SinglyLL
{
private:
     node <T>* first;
    int size;
    
public:
    SinglyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count(); 
};

template <class T>
SinglyLL<T>::SinglyLL()
    {
        first = NULL;
        size = 0;
    }
    
    template <class T>
    void SinglyLL<T>:: InsertFirst(T no)
    {
         node<T> * newn = new node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
        
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        size++;
    }
    
    template <class T>
    void SinglyLL<T>:: InsertLast(T no)
    {
         node<T> * newn = new  node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
        
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
             node<T> * temp = first;
            
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        size++;
    }
    
    template <class T>
    void SinglyLL<T>:: InsertAtPos(T no, int iPos)
    {
         node<T> * temp=first;
        int i=0;

        if(iPos<1 ||iPos>size+1)
        {
            cout<<"Invalid Position\n";
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
            node<T> * newn=new node<T>;

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
    
    template <class T>
    void SinglyLL<T>:: DeleteFirst()
    {
         node<T> * temp = first;
        
        if(first != NULL)
        {
            first = first->next;
            delete temp;
            
            size--;
        }
    }
    
    template <class T>
    void SinglyLL<T>:: DeleteLast()
    {
         node<T> * temp = first;
        
        if(first == NULL)
        {
            return;
        }
        else if(first->next == NULL)
        {
            delete first;
            first = NULL;
            size--;
        }
        else
        {
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            
            delete temp->next;
            temp->next = NULL;
            size--;
        }
    }

    template <class T>
    void SinglyLL<T>:: DeleteAtPos(int iPos)
    {
        node <T>* temp=first;
        int i=0;

        if(iPos<1 || iPos>size)
        {
            cout<<"Invalid position\n";
            return ;
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
            node<T>* targeted=NULL;
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
    
    template <class T>
    void SinglyLL<T>:: Display()
    {
         node<T> * temp = first;
        
        while(temp!= NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<"\n";
    }
    
    template <class T>
    int SinglyLL<T>:: Count()
    {
        return size;
    }

/////////////////////////////////////////////////////////////////////////




template <class T>
class Queue     // Singly Linear Linked List
{
private:
    node<T>* first;
    int size;
    
public:
    Queue();
    void Enqueue(T);
    int Dequeue();
    void Display();
    int Count();
    
};

template <class T>
Queue<T>:: Queue()
    {
        first = NULL;
        size = 0;
    }
    
    template <class T>
    void Queue<T>::Enqueue(T no)   // InsertLast()
    {
        node<T>* newn = new node<T>;
        newn->data = no;
        newn -> next = NULL;
        
        if(size == 0)   // if(first == NULL)
        {
            first = newn;
        }
        else
        {
            node<T>* temp = first;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = newn;
        }
        size++;
    }
    
    template <class T>
    int Queue <T>::Dequeue()   // DeleteFirst()
    {
        int no = 0;
               node<T>* temp = first;
               
               if(size == 0)
               {
                   cout<<"Queue is empty\n";
                   return -1;
               }
               
               if(size == 1)
               {
                   no = first->data;
                   delete first;
                   first = NULL;
               }
               else
               {
                   no = first->data;
                   first = first -> next;
                   delete temp;
               }
               
               size--;
               return no;
               // Logic
    }
    
    template <class T>
    void Queue<T>::Display()
    {
        node<T>* temp = first;

        for(int i = 1 ; i <= size; i++, temp = temp->next)
        {
            cout<<"|"<<temp->data<<"|-> ";
        }
        cout<<"\n";
    }
    
    template <class T>
    int Queue<T>::Count()
    {
        return size;
    }

///////////////////////////////////////////////////////////////////////////////////////


    

template<class T>
class Stack     // Singly Linear Linked List
{
private:
    node<T>* first;
    int size;
    
public:
    Stack();
    void push(T);
    int pop();
    void Display();
    int Count();
};

template<class T>
Stack<T>:: Stack()
    {
        first = NULL;
        size = 0;
    }
    
    template<class T>
    void Stack<T>::push(T no)   // InsertFirst()
    {
        node<T>* newn = new node<T>;
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        size++;
    }
    
    template<class T>
    int Stack<T>::pop()   // DeleteFirst()
    {
        int no = 0;
        node<T>* temp = first;
        
        if(size == 0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        
        if(size == 1)
        {
            no = first->data;
            delete first;
            first = NULL;
        }
        else
        {
            no = first->data;
            first = first -> next;
            delete temp;
        }
        
        size--;
        return no;
        // Logic
    }

    template<class T>
    void Stack<T>::Display()
    {
        node<T>* temp = first;
        
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|"<<"\n";
            temp = temp->next;
        }
    }
    
    template <class T>
    int Stack<T>::Count()
    {
        return size;
    }


////////////////////////////////////////////////////////////////////////////////////


    

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



////////////////////////////////////////////////////////////////////////



template <class T>
class SinglyCL
{
private:
    node<T>* first;
    node<T>* last;
    int size;
    
public:
    SinglyCL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

template <class T>
SinglyCL<T>::SinglyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }

    template <class T>
    void SinglyCL<T>::Display()
    {
        node<T>* temp  = first;
        
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        
        do
        {
            cout<<"|"<<temp->data<<"|-> ";
            temp = temp->next;
        }while(temp != last->next);
        
        cout<<"\n";
    }
    
    template<class T>
    int SinglyCL<T>::Count()
    {
        return size;
    }
    
    template <class T>
    void SinglyCL<T>::InsertFirst(T no)
    {
        node<T>* newn = new node<T>;
        
        newn->data = no;
        newn->next = NULL;
        
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        
        last->next = first;
        size++;
    }
    
    template <class T>
    void SinglyCL<T>::InsertLast(T no)
    {
        node<T>* newn = new node<T>;
        
        newn->data = no;
        newn->next = NULL;
        
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last->next = newn;
            last = newn;
        }
        
        last->next = first;
        size++;
    }
    
    template <class T>
    void SinglyCL<T>::InsertAtPos( T no, int ipos)
    {
        if((ipos < 1) || (ipos > (size+1)))
        {
            return;
        }
        
        if(ipos ==1)
        {
            InsertFirst(no);
        }
        else if(ipos == size+1)
        {
            InsertLast(no);
        }
        else
        {
            node<T>* newn = new node<T>;
            
            newn->data = no;
            newn->next = NULL;
            
            node<T>* temp = first;
            
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            newn->next = temp->next;
            temp->next = newn;
            
            size++;
        }
    }
    
    template  <class T>
    void SinglyCL<T>::DeleteFirst()
    {
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            first = first->next;
            delete last->next;
            last->next = first;
        }
        size--;
    }
    
    template <class T>
    void SinglyCL<T>::DeleteLast()
    {
        node<T>* temp = first;
        
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            while(temp->next != last)
            {
                temp = temp -> next;
            }
            
            delete last;
            last = temp;
                
            last->next = first;
        }
        size--;
    }
    
    template <class T>
    void SinglyCL<T>::DeleteAtPos(int ipos)
    {
        if((ipos < 1) || (ipos > size))
        {
            return;
        }
        
        if(ipos ==1)
        {
            DeleteFirst();
        }
        else if(ipos == size)
        {
            DeleteLast();
        }
        else
        {
            node<T>* temp = first;
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            node<T>* targated = temp->next;
            
            temp->next = targated->next;    // temp->next = temp->next->next;
            delete targated;
            
            size--;
        }
        
    }



    //////////////////////////////////////////////////////////////////////



template<class T>
class DoublyCL
{
private:
    node<T>* first;
    node<T>* last;
    int size;
    
public:
    
    DoublyCL();
    void Display();
    int Count();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no , int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

// Return_Value Class_Name :: Fnuction_Name(Parameters)
template <class T>
DoublyCL<T>:: DoublyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    node<T>* newn = new node<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first -> prev = newn;
        first = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

template <class T>
void DoublyCL<T> :: InsertLast(T no)
{
    node<T>* newn = new node<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        newn->prev = last;
        last = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

template <class T>
void DoublyCL <T>:: Display()
{
    node<T>* temp = first;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
    return size;
}

template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        last = last -> prev;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T no, int ipos)
{
    if((ipos < 1) || (ipos > size+1))
    {
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == size +1)
    {
        InsertLast(no);
    }
    else
    {
        node<T>* newn= new node<T>;
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        node<T>* temp = first;
        
        for(int i = 1; i < ipos -1; i++)
        {
            temp = temp -> next;
        }
        
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        size ++;
    }
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > size))
    {
        return;
    }
    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == size)
    {
        DeleteLast();
    }
    else
    {
        node<T>* temp = first;
        
        for(int i = 1; i < ipos -1 ; i ++)
        {
            temp = temp -> next;
        }
       
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        size--;
    }
}



/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////


int main()
{
    
    
    return 0;
}
