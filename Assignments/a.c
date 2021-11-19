#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
            if ((iCol + i) % 2 == 0)
            {
                printf("%c", j + 'a');
            }
            else
            {
                printf("%c", j + 'A');
            }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns");
    scanf(" %d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}