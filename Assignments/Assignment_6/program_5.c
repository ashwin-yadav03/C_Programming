/*
Expected Output:
* Input: 30000 12 → Bonus = 4500.00
* Input: 20000 7 → Bonus = 2000.00
* Input: 10000 2 → Bonus = 500.00
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if(iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
    }
    else
    {
        fBonus = fSalary * 5 / 100;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}