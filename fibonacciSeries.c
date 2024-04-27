#include<stdio.h>
int main()
{
    int n, i=0;
    int sum=1;
    printf("Enter a count: \n");
    scanf("%d", &n);
    int first= 0, second= 1, next;
    for (i=0; i<=n; i++)
    {
        printf("%d\n", first);
        next = first + second;
        first=second;
        second= next;
    }
    return 0;


}