
/*5. Write java program which accept N numbers from user and return 
product of all odd elements.
Input : N : 6
Elements :15 66 3 70 10 88
Output : 45
*/

import java.util.*;

class Assignment345
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter number of elements");
		int iValue=sobj.nextInt();
		int Arr[]=new int[iValue];
		System.out.println("Enter numbers:");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		Number nobj=new Number();
		int iRet=nobj.Product(Arr);
		System.out.println("Product is"+iRet);
	}
}

class Number
{
	public int Product(int Brr[])
	{
		int i=0,iMul=1;
		for(i=0;i<Brr.length;i++)
		{
			if(Brr[i]%2==1)
			{
				iMul=iMul*Brr[i];
			}

		}
		
		return iMul;
	}
}