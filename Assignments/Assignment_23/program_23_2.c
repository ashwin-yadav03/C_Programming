#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : struprx
//  Description   : Convert string into uppercase
//  Input         : String
//  Output        : Display modified string in uppercase
//  Date          : 16/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is :  %s",arr);

    return EXIT_SUCCESS;
}