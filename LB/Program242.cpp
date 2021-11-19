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


CountCapR(char *str)
{
	static int iCnt=0;
	if(*str!=0)
	{
		if((*str>='A') && (*str<='Z'))
		{
			iCnt++;
		}
		str++;
		CountCapR(str);
	}
	return iCnt;
}
int main()
{
	char Arr[20];

	cout<<"Enter string:";
	scanf("%[^'\n']s",Arr);
	int iRet=CountCapR(Arr);

	cout<<"Capital letters are:"<<iRet<<"\n";

	return 0;
}