#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Display an even number pattern
//  Input         : Number of elements
//  Output        : Display pattern
//  Date          : 15/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}