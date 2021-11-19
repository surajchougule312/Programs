import java.util.*;
class Demo3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter Redious");
		float value=sobj.nextFloat();
		float fRet=0.0f;
		Marvellous mobj=new Marvellous();
		fRet=mobj.Area(value);
		System.out.println("Area is"+fRet);
		fRet=mobj.circumfarance(value);
		System.out.println("Circumfarance is "+fRet);
		System.out.println("Value of PI"+Circle.PI);
		//Circle.PI=6.14f;
		//System.out.println("");
	}
}

interface Circle
{
	 float PI=3.14f;	//public static final
	float Area(float redious);	//public abstact
	float circumfarance(float redious);
}

class Marvellous implements Circle
{
public float Area(float redious)
{
	 float ret=0.0f;
	ret=PI*redious*redious;
	return ret;
}
public float circumfarance(float redious)
{
	 float ret=0.0f;
	ret=2*PI*redious;
	return ret;
}
}