#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    printf("Enter the 1st string to be concatenated: ");
    gets(a);
    printf("Enter 2nd string to be concatenated: ");
    gets(b);
    int c;
    c=strlen(a);
    for(int i=0; i<c; i++){
        a[c+i]=b[i];
    }
    printf("the concatenated string is: %s", a);
    


}