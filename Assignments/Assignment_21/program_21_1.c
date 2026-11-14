#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Display a star pattern
//  Input         : Number of rows and columns
//  Output        : Display pattern
//  Date          : 14/11/2026
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
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Numbers of rows & colums : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
}