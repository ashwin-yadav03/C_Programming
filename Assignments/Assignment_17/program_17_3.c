#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays alphabets and numbers alternatively
//  Input        : Two Integers
//  Output       : Pattern
//  Date         : 07/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", 'a' + j - 1);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
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