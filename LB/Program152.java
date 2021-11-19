import java.util.*;
class Program152
{
	public static void main(String arg[])
	{
		Marvellous mobj=new Marvellous();
		int iRet=0;
		mobj.Accept();
		mobj.Display();
		iRet=mobj.CountVowels();
		System.out.println("Numbers of vowels are:"+iRet);
	}
}
class StringX
{
	public String str;
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter String");
		str=sobj.nextLine();
	}
	public void Display()
	{
		System.out.println("String is:"+str);
	}
}
class Marvellous extends StringX
{
	public int CountVowels()
	{
		char Arr[]=str.toCharArray();
		int iCnt=0,i=0;
		while(i<Arr.length)
		{
			if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u'))
			{
				iCnt++;
			}
			i++;
		}
		return iCnt;
	}
}