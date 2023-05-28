#include <stdio.h>
#include <string.h>

void Replace(char arr[], char oldChar, char newChar) {
    int size = strlen(arr);
    for (int i = 0; i < size; i++) {
        if (arr[i] == oldChar) {
            arr[i] = newChar;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    char oldChar, newChar;
    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    printf("Original string: %s\n", str);

    Replace(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}