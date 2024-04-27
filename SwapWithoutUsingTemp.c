#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a number for variable a: ");
    scanf("%d", &a);
    printf("Enter a number for variable b: ");
    scanf("%d", &b);
    a= a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping a: %d and b: %d", a, b);

}