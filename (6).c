#include <stdio.h>

void shiftArr1Pos(int arr[], int arrSize) {
    int temp = arr[0];
    for (int i = 0; i < arrSize - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[arrSize - 1] = temp;
}

void arr1Rotate(int arr[], int arrSize, int rotFrom) {
    printf("The given array is: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("From %dth position, the values of the array are: ", rotFrom);
    for (int i = rotFrom - 1; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Before %dth position, the values of the array are: ", rotFrom);
    for (int i = 0; i < rotFrom - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr, arrSize);
    }

    printf("After rotating from %dth position, the array is: ", rotFrom);
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int rotFrom;

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &rotFrom);

    arr1Rotate(arr, arrSize, rotFrom);

    return 0;
}
