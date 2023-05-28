#include <stdio.h>
#include <string.h>

void getridofandshift(char str[], char ch) {
    int size = strlen(str);
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    char ch;
    printf("Enter the character to remove: ");
    scanf(" %c", &ch);

    printf("Original string: %s\n", str);

    getridofandshift(str, ch);

    printf("Modified string: %s\n", str);

    return 0;
}