#include<stdio.h>

    int main()
    {
        int n,i,b;
        printf("Enter a number: \n");
        scanf("%d",&n);
        printf("Enter a value for increment: \n");
        scanf("%d", &b);
        printf("Enter the starting number \n");
        scanf("%d",&i);

        while(i<=n)
        {
            printf("%d\n", i);
            i = i + b;

            

        }
    }
