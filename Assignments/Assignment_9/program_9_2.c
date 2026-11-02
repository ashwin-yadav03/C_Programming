#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DollarToINR
//  Description  : Convert US dollers into Indian repees 
//  Input        : Integer
//  Output       : Integer
//  Date         : 31/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet =DollarToINR(iValue);
    
    printf("Value int INR is : %d\n",iRet);

    return EXIT_SUCCESS;
}