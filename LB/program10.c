 #include<stdio.h>
void display();	// declaration
int main()
{
	display();   // function call
	return 0;

}
void display()		//defination
{
	int i=0;
	for(i=1;i<=8;i++)
	{
		printf("#\n");
	}
}

