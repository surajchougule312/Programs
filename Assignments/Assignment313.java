
/*Write a java program which accept string from user and return 
difference between frequency of small characters and frequency 
of capital characters.
Input : “MarvellouS”
Output : 6 (8-2)*/

import java.util.*;
class Assignment313
{
	public static void main(String arg[])
	{
		StringCount scobj=new StringCount();
		int iRet=0;
		scobj.Accept();
		scobj.Display();
		iRet=scobj.CountDiff();
		System.out.println(+iRet);
	}
}
class StringCount extends StringX
{
	public int CountDiff()
	{
		char Arr[]=str.toCharArray();
		int i=0,iCnt=0,iCnt1=0;
		//for(i=0;i<str.length;i++)
		while(i<Arr.length)
		{
			if(Arr[i]>=97 && Arr[i]<=122)
			{
				iCnt++;
			}
			if(Arr[i]>=65 && Arr[i]<=90)
			{
				iCnt1++;
			}
			i++;
		}
		return (iCnt-iCnt1);
		
	}
}
class StringX
{
	public String str;
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter Strinng");
		str=sobj.nextLine();
	}
	public void Display()
	{
		System.out.println("String is:"+str);
	}
}
