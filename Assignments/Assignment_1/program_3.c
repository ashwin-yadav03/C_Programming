#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;

    i = 5;

    while(i >= 1)
    {
        printf("%d ", i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
