#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Displays ASCII value in Decimal, Octal and Hexadecimal
//  Input        : One Character
//  Output       : Decimal, Octal and Hexadecimal Values
//  Date         : 20/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal      : %d\n", (unsigned char)ch);
    printf("Octal        : 0%o\n", (unsigned char)ch);
    printf("Hexadecimal  : 0X%X\n", (unsigned char)ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}