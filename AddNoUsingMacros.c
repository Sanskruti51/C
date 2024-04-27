#include<stdio.h>
#define ADD(a, b) ((a)+(b))

int main(){
    int m, n, sum;
    printf("Enter the number you want to add: \n");
    scanf("%d%d", &m, &n);
    sum= ADD(m,n);
    printf("\n The addition is: %d", sum);

}