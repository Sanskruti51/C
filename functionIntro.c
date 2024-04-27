#include<stdio.h>

void add() //function without return type and argument function declaration
{
    int a,b, c;
    printf("Enter two number: \n");   //fuunction call
    scanf("%d%d", &a, &b);
    c= a+b;
    printf("The addtion of two number is %d", c);
}
int main(){
    printf("Start\n");
    add();  //function call
    printf("\nEnd");
}