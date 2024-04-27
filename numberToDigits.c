#include <stdio.h>

const char *units[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void numbertowords(int a);

int main() {
    int a;

    
    printf("Enter a number: ");
    scanf("%d", &a);

   
    numbertowords(a);

    return 0;
}

void numbertowords(int a) {
     int reversedNumber = 0;

    while (a > 0) {
        int digit = a % 10;
        reversedNumber = reversedNumber * 10 + digit;
        a /= 10;
    }

    while (reversedNumber > 0) {
        
        int c = reversedNumber % 10;
        printf("%s ", units[c]);

        reversedNumber /= 10;  
    }
    printf("\n");
}
