#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    printf("Enter original string: \n");
    gets(a);
    printf("Enter string to be compared: \n");
    gets(b);
    if(!strcmp(a, b)){
        printf("The strings are same \n");
    }
    else{
        printf("The string are not same \n");
    }
}