#include<iostream>
#include<stdio.h>
using namespace std;

int StrlenI(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;

}
int main()
{
	char Arr[20];

	cout<<"Enter string:";
	scanf("%[^'\n']s",Arr);
	int iRet=StrlenI(Arr);

	cout<<"Length of string is:"<<iRet<<"\n";

	return 0;
}