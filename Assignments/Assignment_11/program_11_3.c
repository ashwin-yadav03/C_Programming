////////////////////////////////////////////////////////////
//
//  Function Name: RangeSum
//  Description  : Returns addition of all numbers in range
//  Input        : Integer, Integer
//  Output       : Integer
//  Date         : 04/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    if(iValue1 < 0 || iValue2 < 0 || iValue1 > iValue2)
    {
        printf("Invalid range");
    }
    else
    {
        iRet = RangeSum(iValue1, iValue2);
        printf("Addition is %d", iRet);
    }

    return 0;
}