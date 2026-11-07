#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays alphabets in row and column pattern
//  Input        : Two Integers
//  Output       : Pattern
//  Date         : 06/11/2026
//  Author       : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

void Pattern(int iRow ,int iColums)
{
    char ch = '\0';
    int i,j;
    
    for(i = 1,ch = 'A',ch = 'A';i <= iRow;i++,ch++)
    {
       for(j = 1, ch = 'A'; j <= iColums; j++,ch++)
       {
            printf("%c\t",ch);
       }
       printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of row & Colums : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}