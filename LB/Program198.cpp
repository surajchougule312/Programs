#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT DisplayByte(UINT iNo)
{
	UINT Byte1=iNo & 0x00000FF;
	UINT Byte2=iNo &0x0000FF00;
	Byte2=Byte2>>8;

	UINT Byte3=iNO& 0x00FF0000;
	Byte3=Byte3>>16;

	UINT Byte4=iNo & 0xFF000000;
	Byte4=Byte45>>24;

	cout<<"Byte1="<<Byte1<<"\n";
	cout<<"Byte2="<<Byte2<<"\n";
	cout<<"Byte3="<<Byte3<<"\n";
	cout<<"Byte4="<<Byte4<<"\n";

}

int main()
{
	UINT iValue=0,iRet=0;
	cout<<"Enter number\n";
	cin>>iValue;
	
	
	DisplayByte(iValue);
	return 0;
}