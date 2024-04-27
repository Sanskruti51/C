#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int count = 0;

    printf("Enter original string: \n");
    gets(a);

    printf("Enter string to be compared: \n");
    gets(b);

    if (strlen(a) != strlen(b)) {
        printf("The strings are not the same.\n");
    } else {
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] != b[i]) {
                printf("The strings are not the same.\n");
                break;
            } else {
                count++;
            }
        }

        if (count == strlen(a)) {
            printf("The strings are the same.\n");
        }
    }

    return 0;
}
