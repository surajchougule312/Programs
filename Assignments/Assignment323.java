
/*Write Java program which accept N numbers from user and display 
all such elements which are even and divisible by 5.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 80*/

import java.util.*;
class Assignment323
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
			if((Arr[j]%2==0) && (Arr[j]%5==0))
			{
				System.out.println(Arr[j]);
			}
		}
	}
}