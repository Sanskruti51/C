#include<stdio.h>
int main(){
    char c;
   printf("Enter the data type: ");
   scanf("%s",&c);
   switch(c){
    case 'a': printf("The size of int is: %d", sizeof(int));
    break;

    case 'b': printf("The size of float is %d", sizeof(float));
    break;

    case 'c': printf("The size of character is %d", sizeof(char));
    break;

    default: 
    printf("\n Invalid output");

   }
   
}