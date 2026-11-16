#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Display only digits from string
//  Input         : String
//  Output        : Display digits from string
//  Date          : 16/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}