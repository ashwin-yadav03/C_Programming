#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description   : Count number of white spaces in string
//  Input         : String
//  Output        : Return number of white spaces
//  Date          : 16/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d\n", iRet);

    return EXIT_SUCCESS;
}
