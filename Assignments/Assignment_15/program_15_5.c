#include<stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name: Percentage
//  Description  : Calculates percentage using total marks
//                 and obtained marks
//  Input        : Two Integers
//  Output       : Float
//  Date         : 04/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0;

    if(iTotal == 0)
    {
        return 0.0;
    }

    fPer = ((float)iObtained / iTotal) * 100;

    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%", fRet);

    return 0;
}

//
//Add Assignment_10 solution (Q1 - Q5)