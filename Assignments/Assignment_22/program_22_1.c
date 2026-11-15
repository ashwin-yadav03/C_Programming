#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Display an alphabet pattern
//  Input         : Number of elements
//  Output        : Display pattern
//  Date          : 15/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;
    char ch = '\0';

    for(i = 1,ch = 'A'; i <= iNo; i++,ch++)
    {
        printf("%c\t",ch);
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