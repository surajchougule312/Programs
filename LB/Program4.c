//accept number from user adn display that number of star on screen
//input 4
//output:* * * *

//input:2
//output:* *

#include<stdio.h>
void display(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }

}

int main()//start execution from here
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}