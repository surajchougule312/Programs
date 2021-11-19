
/*Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE*/

#include <stdio.h>
#define true 1
#define false 0
typedef int bool;
bool chkSpacial(char ch)
{
    while (ch != '\0')
        if ((ch >= 33 && ch <= 42) || (ch = 94) || (ch = 64))
        {
            return true;
        }
        else
        {
            return false;
        }
}

int main()
{
    char cvalue = '\0';
    bool bRet = false;

    printf("Enter the character");
    scanf("%c", &cvalue);

    bRet = chkSpacial(cvalue);

    if (bRet == true)
    {
        printf("it is a Spacial symbol");
    }
    else
    {
        printf("it is not a Spacial symbol");
    }
    return 0;
}