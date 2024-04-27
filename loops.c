#include<stdio.h>
int main()
{
    int a, i;
    printf("Enter a Value\n");
    scanf("%d", &a);
    for(i= 1; i<=a; i++)
    {
        if(i%3 != 0 && i%5 != 0)
        {
            printf("%d\n", i);
        }
        else if (i%3 == 0 && i%5 == 0)
        {
            printf("Fizz Buzz\n");
        }
        else if(i%3 == 0)
        {
            printf("Fizz\n");

        }
        else{
            printf("Buzz\n");
        }


    }
}