////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Description   : Reverse a string in place
//  Input         : String
//  Output        : Reversed string
//  Date          : 18/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
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

    printf("Enter string:\n");
    scanf(" %19[^\n]", arr);

    StrRevX(arr);

    printf("Reversed string is: %s\n", arr);

    return EXIT_SUCCESS;
}