//////////////////////////////////////////////////////////
//
//  Function Name: OddFactorial
//  Description  : Calculates Odd factorial of a number
//  Input        : Integer
//  Output       : Integer
//  Date         : 31/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        iNo = iNo - 1;
    }

    for(; iNo >= 2; iNo = iNo - 2)
    {
        iFact = iFact * iNo;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d\n", iRet);

    return 0;
}