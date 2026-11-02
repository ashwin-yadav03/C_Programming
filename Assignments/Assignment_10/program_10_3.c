#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name: KMtoMeter
//  Description  : Converts kilometres into metres
//  Input        : Integer
//  Output       : Integer
//  Date         : 02/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////


int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometres: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in metres is %d\n", iRet);

    return EXIT_SUCCESS;
}