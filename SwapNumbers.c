#include<stdio.h>
int main(){
    int x, y;
    printf("Enter a number for variable x: ");
    scanf("%d", &x);
    printf("\nEnter a variable for variable y: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("\nAfter swapping: x = %d and y = %d", x, y);
}
int swap(int *a, int *b){

    int c;
    c=*a;
    *a=*b;
    *b=c;


}