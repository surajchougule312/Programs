#include<iostream>
using namespace std;
template<class T>
T Max(T x, T y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int i=10,j=20,iret;
	double a=3.14,b=6.10,bret;
	char ch1='G',ch2='A',cret;
	iret=Max(i,j);
	cout<<"Max is:"<<iret<<"\n";

	bret=Max(a,b);
	cout<<"Max is:"<<bret<<"\n";

	cret=Max(ch1,ch2);
	cout<<"Max is:"<<cret<<"\n";
	return 0;
}