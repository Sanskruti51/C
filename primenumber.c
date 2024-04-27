#include<stdio.h>

int main()
{
    int n, i=1;
    printf("Enter anumber to check wether it's a prime number or not\n");
    scanf("%d", &n);
    while(i<n)
    {
        i++;
        if(n%i==0 && n!=1 && n!=2)
        {
            
            printf("It's a not a prime number\n");
            break;

        }
        else{
    printf("It's a prime number ");
            break;
        }

    }


    
}