////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description   : Check whether character is alphabet or not
//  Input         : One character
//  Output        : TRUE or FALSE
//  Date          : 18/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}   