
/*Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM*/

#include<stdio.h>
void DisplaySchedule(char ch)
{
	if(ch=='A')
	{
		printf("Your exam at 7AM");
	}
	else if(ch=='B')
	{
		printf("Your exam at 8.30AM");
	}
	else if(ch=='C')
	{
		printf("Your exam at 9.20AM");
	}
	else if(ch=='D')
	{
		printf("Your exam at 10.30AM");
	}
	else
	{
		printf("vedya chuklas division takayla");
	}
}
int main()
{
	char cValue='\0';
	printf("enter character\n");
	scanf("%c",&cValue);
	DisplaySchedule(cValue);
	return 0;
}