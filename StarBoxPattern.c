#include<stdio.h>
int main()
{
    int i, j, a, b;
    printf("Enter no of rows");
    scanf("%d", &a);
    printf("Enter no of columns");
    scanf("%d", &b);
    for(i=1; i<=a; i++)
    {
        if(i==1 || i==a)
        {
            for(j=1; j<b-1; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for(j=1; j<b-2; j++)
            {
                printf(" ");
            }
        }
        printf("*\n");
    }



}