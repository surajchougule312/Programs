#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT OnRenge(UINT iNo,int iStart, int iEnd)
{
	return (iNo^(0xFFFFFFFF<<(iStart-1)) & (0xFFFFFFFF>>(32-iEnd)));

}

int main()
{
	UINT iValue=0,iRet=0,i=0,j=0;
	cout<<"Enter number\n";
	cin>>iValue;
	cout<<"Enter starting position\n";
	cin>>i;
	cout<<"Enter ending position\n";
	cin>>j;
	
	iRet=OnRenge(iValue,i,j);
	cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}