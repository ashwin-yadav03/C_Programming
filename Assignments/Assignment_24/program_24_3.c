////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description   : Return index of first occurrence of character
//  Input         : String and one character
//  Output        : Character index
//  Date          : 18/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iPos;
        }

        iPos++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf(" %19[^\n]", arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}