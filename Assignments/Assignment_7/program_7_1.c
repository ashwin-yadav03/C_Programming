#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Prints $ and * pattern
//  Input         : Integer 
//  Output        : Character
//  Author        : Ashwin Vinayak Yadav
//  Date          : 30/10/2026
//
///////////////////////////////////////////

void Pattern(int iNo)
{
    int iCount = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("$   *   ");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter  Number : ");
    scanf("%d",&iValue);

    pattern(iValue);
    
    return EXIT_SUCCESS;
}