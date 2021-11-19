#include<iostream>
using namespace std;

template <class T>
 struct node
{
    int data;
    struct node *next;
};

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

int main()
{
    Queue <int>obj;
    
    obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(101);
    
    cout<<"Elements of Queue :\n";
    
    obj.Display();
    int iret = obj.Dequeue();       // 11
    cout<<"Removed element from queue"<<iret<<"\n";                     // 11
    
    cout<<"Elements from queue : \n";
    obj.Display();          // 11       21          51
    iret = obj.Count();     // 3
    
    cout<<"Size of queue is : "<<iret<<"\n";        // 3
    
    return 0;
}
