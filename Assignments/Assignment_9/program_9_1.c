#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Displays * and # patter
//  Input        : Integer
//  Output       : Character
//  Date         : 31/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1;iCount <= iNo;iCount++)
    {
       printf("  $  ");
    }

    for(iCount = 1;iCount <= iNo;iCount++)
    {
            printf("  #   ");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}