#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[50];
    printf("Enter first string: ");
    fgets(A, 100, stdin);
    A[strcspn(A, "\n")] = 0;
    printf("Enter second string: ");
    fgets(B, 50, stdin);
    B[strcspn(B, "\n")] = 0;

    int sizeA = strlen(A);
    int sizeB = strlen(B);

    for (int i = 0; i < sizeB; i++) {
        A[sizeA + i] = B[i];
    }
    A[sizeA + sizeB] = '\0';

    printf("After joining, first string: %s\n", A);

    return 0;
}