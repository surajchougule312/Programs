import java.util.*;
class Program143
{
	public static void main(String arg[])
	{
		int iSize=0,iCnt=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter number of elements");
		iSize=sobj.nextInt();

		int Arr[]=new int[iSize];

		System.out.println("Enter nmbers");
		for(iCnt=0;iCnt<Arr.length;/*Arr[iSize];*/iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
		System.out.println("enter elements are");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print("\t"+Arr[iCnt]);
		}
	}
}