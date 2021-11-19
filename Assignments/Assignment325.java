
/*5. Write Java program which accept N numbers from user and display 
all such elements which are multiples of 11.
Input : N : 6
Elements :85 66 3 55 93 88
Output : 66 55 88*/

import java.util.*;
class Assignment325
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter number of elements");
		int iValue=sobj.nextInt();
		ArrayDemo aobj=new ArrayDemo(iValue);
		aobj.Accept();
		aobj.Display();
		aobj.Difference();
	}
}
class ArrayX
{
	public int Arr[];
	public ArrayX(int iNo)
	{
		Arr=new int[iNo];
	}
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter numbers");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
	}
	public void Display()
	{
		System.out.println("Elements are");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
		System.out.println("");
	}
}
class ArrayDemo extends ArrayX
{
	public ArrayDemo(int iValue)
	{
		super(iValue);
	}
	public void Difference()
	{
		for(int j=0;j<Arr.length;j++)
		{
			if((Arr[j]%11==0))
			{
				System.out.println(Arr[j]);
			}
		}
	}
}