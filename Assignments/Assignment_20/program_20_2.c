#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Display a star, hash and at-sign pattern
//  Input         : Number of rows and columns
//  Output        : Display pattern
//  Date          : 11/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i + j < iRow + 1)
            {
                printf("* ");
            }
            else if(i + j == iRow + 1)
            {
                printf("# ");
            }
            else
            {
                printf("@ ");
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