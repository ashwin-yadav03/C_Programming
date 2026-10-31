#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Number
//  Description  : Displays small, medium or large
//  Input        : Integer
//  Output       : Character String
//  Date         : 30/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Mediam");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}