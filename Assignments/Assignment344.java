
/*4. Write java program which accept N numbers from user and accept 
Range, Display all elements from that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88
Output :*/

import java.util.*;
class Assignment341
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int i=0;
		System.out.println("enter number of elements");
		int iValue=sobj.nextInt();
		System.out.println("start renge");
		int iStart=sobj.nextInt();
		System.out.println("End renge");
		int iEnd=sobj.nextInt();
		int Arr[]=new int[iValue];
		System.out.println("enter elements");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		boolean bRet=false;
		Number nobj=new Number();
		nobj.Check(Arr,iStart,iEnd);
		
	}
}
class Number
{
	public void  Check(int Brr[], int Start, int end )
	{
		int i=0;
		System.out.println("");
		for(i=0;i<Brr.length;i++)
		{
			if((Brr[i]>Start) && (Brr[i]<end))
			{
				System.out.print(Brr[i]+"\t");
			}
		}
	}
}