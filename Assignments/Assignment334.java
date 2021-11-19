
/*4.Write a program which accept number from user and return 
multiplication of all digits.
Input : 2395 
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864*/

import java.util.*;
class Assignment334
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter number");
		int iValue=sobj.nextInt();
		Digit dobj=new Digit();
		int iRet=dobj.Multiply(iValue);
		System.out.println(iRet);
	}
}
class Digit
{
	public int Multiply(int iNo)
	{
		int iDigit=0,iMul=1;
		while(iNo !=0)
		{
			iDigit=iNo%10;
			if(iDigit==0)
			{
				iNo=iNo/10;
			}
			else
			{
				iMul=iMul*iDigit;
				iNo=iNo/10;

			}
			
		}
		return iMul;
	}
}