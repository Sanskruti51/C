#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    printf("enter the string:  ");
    gets(str);
    for(int i=0; i<100; i++){
        if(str[i]){
            count++;

        }      
        else{
            break;
        }

        
        }
        printf("The string lenght is: %d", count);
    


}