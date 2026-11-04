////////////////////////////////////////////////////////////
//
//  Function Name: FactRev
//  Description  : Displays factors in decreasing order
//  Input        : Integer
//  Output       : None
//  Date         : 04/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return 0;
}