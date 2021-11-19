#include<stdio.h>
#include<string.h>
int main()
{
	char Arr[20]="Hello";
	char Brr[10];
	int ret=0;
	char Crr[20]=" World";
	printf("Size of arr:%d\n",sizeof(Arr));
	
	printf("Length of arr is:%d\n",strlen(Arr));
	strcpy(Brr,Arr);
	printf("Contents of Brr:%s\n",Brr);
	
	ret=strcmp(Arr,Brr);
	if(ret==0)
	{
		printf("String are equal\n");
	}
	else
	{
		printf("string are not equal\n");
	}
	strcat(Arr,Crr);
	printf("String after concatination:%s\n",Arr);

	return 0;

}