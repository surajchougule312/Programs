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
	char x='A',y='B';
	SwapX(&x,&y);

	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"value of y becomes : "<<y<<"\n";

	int i=11,j=22;
	SwapX(&i,&j);

	cout<<"Value of x becomes : "<<i<<"\n";
	cout<<"value of y becomes : "<<j<<"\n";

	return 0;
}