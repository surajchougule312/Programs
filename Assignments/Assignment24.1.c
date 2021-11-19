#include<stdio.h>
#define  true 1
#define false 0
typedef  int BOOL;

BOOL ChkChar(char *Str,char ch)
{
    while(*Str!=0)
    {
        if(*Str==ch)
        {
            return true;
        }
        Str++;
    }
    return false;
}
int main()
{
    char Arr[20];
    char cValue='\0';
    BOOL bRet=false;
    printf("Enter string\n");   
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet=ChkChar(Arr,cValue);
    if(bRet==true)
    {
        printf("Letter is presend");
    }
    else
    {
        printf("Letter is not present");
    }
    return 0;
}