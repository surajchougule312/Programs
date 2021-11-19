
/*Write a Java program which accept string from user and count 
number of capital characters.
Input : “Marvellous Multi OS”
Output : 4*/

import java.util.*;
class Assignment311
{
	public static void main(String arg[])
	{
		StringCount scobj=new StringCount();
		int iRet=0;
		scobj.Accept();
		scobj.Display();
		iRet=scobj.CountCapital();
		System.out.println(+iRet);
	}
}
class StringCount extends StringX
{
	public int CountCapital()
	{
		char Arr[]=str.toCharArray();
		int i=0,iCnt=0;;
		//for(i=0;i<str.length;i++)
		while(i<Arr.length)
		{
			if(Arr[i]>=65 && Arr[i]<=90)
			{
				iCnt++;
			}
			i++;
		}
		return iCnt;
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
