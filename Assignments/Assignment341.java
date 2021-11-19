
/*1. Write java program which accept N numbers from user and accept 
one another number as NO , check whether NO is present or not.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE*/

import java.util.*;
class Assignment341
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int i=0;
		System.out.println("enter number of elements");
		int iValue=sobj.nextInt();
		System.out.println("Check NO:");
		int No=sobj.nextInt();
		int Arr[]=new int[iValue];
		System.out.println("enter elements");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		boolean bRet=false;
		Number nobj=new Number();
		bRet=nobj.Check(Arr,No);
		if(bRet==true)
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");
		}
	}
}
class Number
{
	boolean Check(int Brr[], int iNo)
	{
		int i=0;
		for(i=0;i<Brr.length;i++)
		{
			if(Brr[i]==iNo)
			{
				return true;
			}
		}
		return false;
	}
}