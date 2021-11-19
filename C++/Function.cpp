#include<iostream>
using namespace std;

void  fun(int x)	//call by value
{
	 x++;
	//cout<<x;
}
void gun(int *p)	//call by address
{
	(*p)++;
}
void sun(int &ref)	//call by reference
{
	ref++;
}
int main()
{
	int a=10,b=10,c=10;
	
	cout<<"Befor call to fun"<<a<<"\n";
	fun(a);
	cout<<"After call to fun"<<ret<<"\n";
	
	cout<<"Befor call to gun"<<b<<"\n";
	gun(&b);
	cout<<"After call to gun"<<b<<"\n";
	
	cout<<"Befor call to Sun"<<c<<"\n";
	sun(c);
	cout<<"After call to Sun"<<c<<"\n";
	
	return 0;
}