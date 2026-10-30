#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: OddDisplay
//  Description  : Displays odd numbers up to given number
//  Input        : Integer
//  Output       : Integers
//  Date         : 30/10/2026
//  Author       : Ashwin Yadav
//
//////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount = iCount + 2)
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

    OddDisplay(iValue);
    
    return EXIT_SUCCESS;
}
