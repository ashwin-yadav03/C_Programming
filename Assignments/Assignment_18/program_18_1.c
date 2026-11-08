#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays * and # in a pattern
//  Input        : Two Integers
//  Output       : Pattern
//  Date         : 08/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iRow, int iColum)
{
    int i = 0,j = 0;

    for(i = 1;i <= iRow; i++)
    {
        for(j = 1;j <= iColum; j++)
        {
            if(i < j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Entre Number Of Row & Colums  : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}