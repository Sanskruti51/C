#include<stdio.h>
char ch;
int num1, num2;
int main()
{
    printf("Enter two numbers\n");
    scanf("%d%d",&num1, &num2 );
 
    printf("enter + for addtion\n Enter - for subtraction \n * for multiplication\n");
    scanf("%c", &ch);
    

    switch(ch)
    {
        case '+': 
        printf("Addtion is %d\n",num1+num2);
        break;

        case '-': 
        printf("Subtraction is %d\n", num1-num2);
        break;

        case '*':- 
        printf("Multiplication is %d\n", num1*num2);
        break;

        default:
        printf("Invalid Input");
        
    }

}