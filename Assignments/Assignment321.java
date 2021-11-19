
/*Write Java program which accept N numbers from user and return 
difference between summation of even elements and summation of 
odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)*/

import java.util.*;
class Assignment321
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int iValue=0,iRet=0;
		System.out.println("Enter number of elements");
		iValue=sobj.nextInt();
		ArrayDemo aobj=new ArrayDemo(iValue);
		aobj.Accept();
		aobj.Display();
		iRet=aobj.Diffrence();
		System.out.println("Summestion is:"+iRet);
	}
}
class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr=new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		int i=0;
		System.out.println("Enter Elements:");
			for(i=0;i<Arr.length;i++)
			{
				Arr[i]=sobj.nextInt();
			}
	}
	public void Display()
	{
		int i=0;
		System.out.println("Number are");
		for( i=0;i<Arr.length;i++)
		{
			System.out.println("Elements Are:"+Arr[i]);
		}
	}
}
class ArrayDemo extends ArrayX
{
	
	public ArrayDemo(int iValue)
	{
		super(iValue);
	}
	public int Diffrence()
	{
		int j=0,SumEven=0,SumOdd=0;
		for(j=0;j<Arr.length;j++)
		{
			if(Arr[j]%2==0)
			{
				SumEven=SumEven+Arr[j];
			}
			else
			{
				SumOdd=SumOdd+Arr[j];
			}
		}
		return (SumEven-SumOdd);
	}
}