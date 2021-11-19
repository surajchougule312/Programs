
/*1.Write a java program which accept number from user and return the 
count of even digits.
Input : 2395 
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4*/

import java.util.*;
class Assignment331
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter number");
		int iValue=sobj.nextInt();
		Digit dobj=new Digit();
		int iRet=dobj.CountEven(iValue);
		System.out.println(iRet);
	}
}
class Digit
{
	public int CountEven(int iNo)
	{
		int iDigit=0,iCnt=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit%2==0)
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;
		
	}
}