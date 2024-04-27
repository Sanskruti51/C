#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows for two arrays: ");
    scanf("%d", &m);
    printf("Enter the number of columns for two arrays: ");
    scanf("%d", &n);

    int arr[m][n], a[m][n];

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = arr[i][j] + a[i][j];
        }
    }

    printf("The sum of two arrays is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
