//////////////////////////////////////////////////////////
//
//  Function Name: FactorialDiff
//  Description  : Returns difference between even and odd factorial
//  Input        : Integer
//  Output       : Integer
//  Date         : 31/10/2026
//  Author       : Ashwin Yadav
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = iNo; iCount >= 1; iCount--)
    {
        if(iCount % 2 == 0)
        {
            iEvenFact = iEvenFact * iCount;
        }
        else
        {
            iOddFact = iOddFact * iCount;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n", iRet);

    return 0;
}