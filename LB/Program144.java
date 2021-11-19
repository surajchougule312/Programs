import java.util.*;
class Program144
{
	public static void main(String arg[])
	{
		int iSize=0,iCnt=0,iRet=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter number of elements");
		iSize=sobj.nextInt();

		int Arr[]=new int[iSize];

		System.out.println("Enter nmbers");
		for(iCnt=0;iCnt<Arr.length;/*Arr[iSize];*/iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
		Marvellous mobj=new Marvellous();
		iRet=mobj.Add(Arr);
		System.out.println("Addition is:"+iRet);
		
	}
}
class Marvellous
{
	int iCnt=0,iSum=0;
	public int Add(int Brr[])
	{
		for(iCnt=0;iCnt<Brr.length;iCnt++)
		{
			iSum=iSum+Brr[iCnt];
		}
		return iSum;
	}
}