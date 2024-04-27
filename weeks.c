#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number from 1 to 7 \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: 
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4: 
        printf("Thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6: 
        printf("Saturday");
        break;

        case 7: 
        printf("Sunday");
        break;

        default:
        printf("Invalid Input");


    }
    
    return 0;

}
