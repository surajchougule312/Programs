
/*5.Write a program which accept number from user and return 
difference between summation of even digits and summation of odd 
digits.
Input : 2395 
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)*/

import java.util.*;
class Assignment335
{
	public static void main(String arf[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enteer number");
		int iValue=sobj.nextInt();
		Digit dobj=new Digit();
		int iRet=dobj.CountDiff(iValue);
		System.out.println(iRet);
	}
}
class Digit
{
	public int CountDiff(int iNo)
	{
		int iDigit=0,iEven=0,iOdd=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit%2==0)
			{
				iEven=iEven+iDigit;
			}
			else
			{
				iOdd=iOdd+iDigit;
			}
			iNo=iNo/10;
		}
		return (iEven-iOdd);
	}
}