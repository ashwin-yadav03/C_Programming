#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Convert string into lowercase
//  Input         : String
//  Output        : Display modified string in lowercase
//  Date          : 16/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}