#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : strtogglex
//  Description   : Toggle the case of each character
//  Input         : String
//  Output        : Display modified string with toggled case
//  Date          : 16/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}