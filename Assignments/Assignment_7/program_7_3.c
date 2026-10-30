#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Displays numbers from -iNo to iNo
//  Input        : Integer
//  Output       : Integers
//  Date         : 30/10/2026
//  Author       : Ashwin Vinayak Yadav
//
//////////////////////////////////////////////////////////

void Dislay(int iNo)
{

    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = -iNo; iCount <= iNo; iCount++)
    {
        printf("%d\t",iCount);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter  Number : ");
    scanf("%d",&iValue);

    Dislay(iValue);

    return EXIT_SUCCESS;
}
