#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Factorial
//  Description  : Calculates factorial of a given number
//  Input        : Integer
//  Output       : Integer
//  Date         : 30/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        iFact = iFact * iCount;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is : %d\n",iRet);

    return EXIT_SUCCESS;
}