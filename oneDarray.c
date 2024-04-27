#include<stdio.h>

 void Descending(int array[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
 int main(){

    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the %d element: \n", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]==0){
             printf("Code Has stop taking input since user entered zero : \n");
             n=i;
             break;
        }
    }

    Descending(arr, n);
    
    printf("Sorted in descending order, array of numbers: \n");
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);

    }



    

 }