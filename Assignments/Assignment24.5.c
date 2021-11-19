#include <stdio.h>
void StrRevx(char *start)
{
    char *end = start;
    char temp;

    while (*end != '\0')
    {
        end++;
    
    }
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char arr[20];

    printf("enter string\n");
    scanf(" %[^'\n']s", arr);

    StrRevx(arr);

    printf("Modified String is %s", arr);

    return 0;
}