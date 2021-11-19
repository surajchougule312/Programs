
/*Write java program which accept N numbers from user and accept 
one another number as NO , return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1*/

import java.util.*;
class Assignment342
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner (System.in);
		System.out.println("Enter number of elements");
		int iValue=sobj.nextInt();
		System.out.println("Enter NO:");
		int NO=sobj.nextInt();
		int Arr[]=new int[iValue];
		System.out.println("enter elements");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		int iRet=0;
		Number nobj=new Number();
		iRet=nobj.FirstOcc(Arr,NO);
		System.out.println(iRet);
	}
}
class Number
{
	public int FirstOcc(int Brr[],int iNo)
	{
		int i=0;
	
	for(i=Brr.length-1;i>=0;i--)
	{
		if(Brr[i]==iNo)
		{
			break;
		}

	}	
		return i;
	}
	
}