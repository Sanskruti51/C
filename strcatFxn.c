#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100], c[100];
    printf("Enter the 1st string to be concatenated: ");
    gets(a);
    printf("Enter 2nd string to be concatenated: ");
    gets(b);
    printf("The concatenated string is: %s", strcat(a, b));


}