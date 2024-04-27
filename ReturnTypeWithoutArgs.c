#include <stdio.h>
#include <stdlib.h>


const char *units[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


int main() {
     char *l;
     l= numbertowords();


    return 0;
}

char *numbertowords(void) {
    int a;

    
    printf("Enter a number: ");
    scanf("%d", &a);

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
