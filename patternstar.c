#include<stdio.h>
int main()
{
    int i, j, a, b;
    printf("Enter number of rows\n");
    scanf("%d", &a);
    printf("Enter number of columns\n");
    scanf("%d", &b);
    for (i=1; i<=a; i++)
    {
        for(j=1; j<=b; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}