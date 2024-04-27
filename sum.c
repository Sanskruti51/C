#include<stdio.h>

    int main()
    {
        int n,i,b, sum=0;
        printf("Enter a number: \n");
        scanf("%d",&n);
        printf("Enter a value for increment: \n");
        scanf("%d", &b);
        printf("Enter the starting number \n");
        scanf("%d",&i);

        while(i<=n)
        {
            printf("%d\n", i);
            sum= i + sum;
            i = i + b;
            

            

        }
        printf(" the value of sum is:  %d /n" , sum);
    }
