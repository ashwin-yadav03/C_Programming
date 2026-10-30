#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Function Name: MultipleDisplay
//  Description  : Displays first 5 multiples of a number
//  Input        : Integer
//  Output       : Integers
//  Date         : 30/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("%d\t", iNo * iCount);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}