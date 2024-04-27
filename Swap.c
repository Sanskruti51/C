#include<stdio.h>
int main(){
    int x, y;
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("Enter Value of y: ");
    scanf("%d", &y);
    int temp=x;
    x=y;
    y=temp;
    printf("\n After Swapping x: %d and y: %d", x, y);

}