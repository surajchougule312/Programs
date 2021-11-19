#include<iostream>
using namespace std;

//specific function
void Swap(char *p, char *q)
{
	char temp;

	temp=*p;
	*p=*q;
	*q=temp;
}

//Genaric function
template <class T>
void SwapX(T *p, T *q)
{
	T temp;

	temp=*p;
	*p=*q;
	*q=temp;

}
int main()
{
	char x='\0',y='\0';

	cout<<"Enter first number\n";
	cin>>x;

	cout<<"Enter second number\n";
	cin>>y;

	SwapX(&x,&y);

	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"value of y becomes : "<<y<<"\n";

	return 0;
}