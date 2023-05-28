#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int size = stringLength(str);

    int isPalindrome = 1;
    for (int i = 0; i < size / 2; i++) {
        if (str[i] != str[size - i - 2]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}