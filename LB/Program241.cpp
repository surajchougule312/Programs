#include<iostream>
#include<stdio.h>
using namespace std;

CountCapI(char *str)
{
	int iCnt=0;
	while(*str!=0)
	{
		if((*str>='A') && (*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];

	cout<<"Enter string:";
	scanf("%[^'\n']s",Arr);
	int iRet=CountCapI(Arr);

	cout<<"Capital letters are:"<<iRet<<"\n";

	return 0;
}