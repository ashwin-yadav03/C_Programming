#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Display the given pattern
//    Input         : Integer, Integer
//    Output        : Pattern
//    Date          : 09/11/2026
//    Author        : Ashwin Vinayak Yadav
////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("*\t");
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

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}