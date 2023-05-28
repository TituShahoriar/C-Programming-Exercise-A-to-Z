#include <stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The unique elements are: ");
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j] && i != j) {
                count++;
                break;
            }
        }
        if(count == 0) {
            printf("%d ", arr[i]);
        }
    }
}