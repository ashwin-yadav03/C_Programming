#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays numbers from 1 to 9 repeatedly
//  Input        : Two Integers
//  Output       : Pattern
//  Date         : 07/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCloums)
{
    int i = 0, j = 0, iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCloums; j++)
        {
            printf("%d\t",iNum);
            iNum++;
            if(iNum > 9)
            {
                iNum = 1;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Number of Rows & Colums : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}