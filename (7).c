#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    int size = strlen(str);

    printf("Original string: %s\n", str);

    int j = 0;
    for (int i = 0; i < size; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Modified string: %s\n", str);

    return 0;
}