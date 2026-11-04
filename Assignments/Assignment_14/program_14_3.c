////////////////////////////////////////////////////////////
//
//  Function Name: NonFact
//  Description  : Displays all non factors of a number
//  Input        : Integer
//  Output       : None
//  Date         : 04/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}