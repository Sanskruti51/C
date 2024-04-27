#include<stdio.h>
int main()
{
    int i, a=1;
    printf("Enter a value");
    scanf("%d", &i);
    do{
        printf("%d \n", a);
        a++;
    }
    while (a<=i);
    
    

}