/*
    Expected Output:
    * Input: 15 → Divisible by Both
    * Input: 9 → Divisible by 3 Only
    * Input: 10 → Divisible by 5 Only
    * Input: 7 → Not Divisible by Either
*/

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both\n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}