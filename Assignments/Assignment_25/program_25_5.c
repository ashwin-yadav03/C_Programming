////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description   : Display exam schedule according to division
//  Input         : Division of student (A, B, C, D)
//  Output        : Exam timing
//  Date          : 18/11/2026
//  Author        : Ashwin Vinayak Yadav
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}