#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the length of the first side: ");
    scanf("%d", &a);
    printf("Enter the length of the second side: ");
    scanf("%d", &b);
    printf("Enter the length of the third side: ");
    scanf("d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) 
        {
            printf("It's an equilateral triangle.\n");
        }
        else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) 
        {
            printf("It's a right-angle triangle.\n");
        }
       
        else if (a == b || b == c || c == a) 
        {
            printf("It's an isosceles triangle.\n");
        }
        else {
            printf("It's a scalene triangle.\n");
        }
    } 
    else {
        printf("It's not a triangle.\n");
    }

    return 0;
}
