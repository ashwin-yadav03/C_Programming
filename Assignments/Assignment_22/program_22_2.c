#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Display a reverse number and hash pattern
//  Input         : Number of elements
//  Output        : Display pattern
//  Date          : 15/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t",i);
        printf("#\t");
    }
}
int main()
{
    int iValue1;

    printf("Enter Number of elemnts : ");
    scanf("%d",&iValue1);

    Pattern(iValue1);
    
    return EXIT_SUCCESS;
}