#include<stdio.h>
int main()
{
    int a, n;
    printf("Enter a number to check wether the number is prime or not\n");
    scanf("%d", a);
    for(n=1; n<=a; n++)
    {
        if(a%n == 0 && a != 1 && a!=2)
        {
            printf("the number is not a prime number\n");
            break;
        }
        else{
            printf("The number is a prime number\n");
            break;
        }
    }


}


