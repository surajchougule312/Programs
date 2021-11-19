////////////////////////////////////////////////////////////////////////
//
//Function Name:  Addition
//Input:				Integer,Integer
//Output:			Integer
//Description:		Is is use to add 2 Numbers
//Author:			Suraj Rajaram Chougule
//Date:				31/08/2021
//
/////////////////////////////////////////////////////////////////////////////

/*
	Algorithm

	START
		Accept first number as iNo1
		Accept second number as iNo2
		perform addition of iNo1& iNo2
		store the result in Ret
		Return the value of Ret
	STOP
*/
#include "Header.h"
int Addition(
				int iNo1,//First input argument
				int iNo2//Second input argument
				)
{
	int iResult=0;//Local veriable to store result
	
	iResult=iNo1+iNo2;
	
	return iResult;// Return the value of caller
}
