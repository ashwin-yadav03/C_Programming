////////////////////////////////////////////////////////////
//
//  Function Name: DisplayASCII
//  Description  : Displays ASCII table from 0 to 255
//  Input        : No Input
//  Output       : ASCII Table (Symbol, Decimal, Hexadecimal, Octal)
//  Date         : 20/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%x\t\t%o\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}