//////////////////////////////////////////////////////////
//
//  Function Name: TableRev
//  Description  : Displays multiplication table in reverse order
//  Input        : Integer
//  Output       : Integers
//  Date         : 30/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 10; iCount >= 1; iCount--)
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

    TableRev(iValue);

    return 0;
}