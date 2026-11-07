#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iColum)
{
    int i = 0,j = 0,iNum = 1;

    for(i = 1; i <= iRow;i++)
    {
        for(j = 1; j <= iColum; j++)
        {
            printf("%d\t",iNum);
            iNum++;
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter of Numbers rows & Colums : ");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}