#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements you want to input");
    scanf("%d", &n);
        int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the element");
        scanf("%d", &arr[i]);

    }

}