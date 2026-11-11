#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Display a number pattern
//  Input         : Number of rows and columns
//  Output        : Display pattern
//  Date          : 09/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow + 1; i++)
    {
        for(j = 1; j <= iCol + 1; j++)
        {
            if(i == 1 || i == iRow + 1 || j == 1 || j == i || j == iCol + 1)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}