#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays even and odd numbers alternatively
//  Input        : Two Integers
//  Output       : Pattern
//  Date         : 07/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i, j, iNum = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iNum = 2;
        }
        else
        {
            iNum = 1;
        }

        for(j = 1; j <= iCol + 1; j++)
        {
            printf("%d\t", iNum);

            iNum = iNum + 2;
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}