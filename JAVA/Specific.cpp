using namespace std;
#include<iostream>

int MaxI(int x, int y)
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
double MaxD(double x, double y)
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
char MaxC(char x, char y)
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
	int i=10, j=20,iRet=0;
	iRet=MaxI(i,j);
	cout<<"Max is:"<<iRet<<"\n";
	double a=3.10,b=6.10,dRet;
	dRet=MaxD(a,b);
	cout<<"Max is:"<<dRet<<"\n";
	return 0;
}