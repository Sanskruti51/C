#include<stdio.h>

int checknoofones(){
    char s[5]; 
    int count = 0;

    printf("Enter 4 digit number: ");
    scanf("%s", s); 

    for (int i = 0; i < 4; i++) {
        if (s[i] == '1') {
            count++;
        }
    }

    printf("The number of 1's are %d", count);
    return count; 
}

int main() {
    int result = checknoofones();
    return 0;
}
