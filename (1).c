#include <stdio.h>
int main() {
    int n, k, i, element;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &k);
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);
    for(i = n; i >= k; i--) {
        arr[i] = arr[i-1];
    }
    arr[k-1] = element;
    printf("The new array is: ");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}