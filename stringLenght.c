#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    printf("Enter a string: ");
    gets(str);
    int count;
    count=strlen(str);
    printf("The lenght of string is: %d", count);
}