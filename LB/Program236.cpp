#include<iostream>
using namespace std;

int SumI(int Arr[],int size)
{
	int iSum=0,i=0;


	for(i=0;i<size;i++)
	{
		iSum=iSum+Arr[i];
	}
	return iSum;
}

/*int SumI(int Arr[],int size)
{
	int iSum=0,i=0;

	i=0;
	while(i<size)
	{
		iSum=iSum+Arr[i];
		i++;
	}
	return iSum;
}*/


int main()
{
	int iLength=0,i=0,iRet=0;
	int *p=NULL;
	
	cout<<"Enter number of Elements:\n";
	cin>>iLength;

	p=new int[iLength];

	cout<<"Enter elements:";

	for(i=0;i<iLength;i++)
	{
		cin>>p[i];
	}
	iRet=SumI(p,iLength);
	cout<<"Addition is:"<<iRet<<"\n";


	delete []p;
	return 0;
}