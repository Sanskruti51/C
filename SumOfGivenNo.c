#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of no's you want to add: ");
    scanf("%d", &n);
    int a[n];
    int i, sum=0;
    printf("\nEnter the numbers: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum= sum+ a[i];

    }
    printf("\nThe sum of the given number is: %d", sum);
    

}