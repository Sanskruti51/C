#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the numbers you want to swap for the variable a and b respectively: ");
    scanf("%d%d", &a, &b);
    printf("\n Before swapping the value for a is %d and value for b is %d", a, b);
    a= a^b;
    b=a^b;
    a=a^b;
    printf("\n After swapping the value for a is %d and value for b is %d", a, b);


}