#include <stdio.h>

int main(){
    int m, n;
    printf("Enter no of rows");
    scanf("%d", &m);
    printf("Enter no of columns");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the elements for array");
    for(int i=0; i<=(m-1);i++ ){
        for(int j=0; j<=(n-1); j++){
            scanf("%d", &arr[i][j]);

        }
    }
    for(int i=0; i<=(m-1);i++ ){
        for(int j=0; j<=(n-1); j++){
            printf("%d", arr[i][j]);

        }
        printf("\n");
    }


}