
/*2.Write a program which accept number from user and return the 
count of odd digits.
Input : 2395 
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0*/

import java.util.*;
class Assignment332
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter number");
		int iValue=sobj.nextInt();
		Digit dobj=new Digit();
		int iRet=dobj.CountOdd(iValue);
		System.out.println(iRet);

	}
}
class Digit
{
	public int CountOdd(int iNo)
	{
		int iDigit=0,iCnt=0;
		if(iNo<0)
		{
			iNo=-
		}
		while(iNo !=0)
		{
			iDigit=iNo%10;
			if(iDigit%2==1)
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;        
	}
}