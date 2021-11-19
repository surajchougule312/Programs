#include<stdio.h>
int main()
{
	printf("charater take %d size in memory\n",sizeof(char));
	printf("integer take %d size in memory\n",sizeof(int));
	printf("float take %d size in memory\n",sizeof(float));
	printf("double take %d size in memory\n",sizeof(double));
	printf("long take %d size in memory\n",sizeof(long));
	printf("long integer take %d size in memory\n",sizeof(long int));
	printf("pointer take %d size in memory\n",sizeof(int*));
	return 0;
}