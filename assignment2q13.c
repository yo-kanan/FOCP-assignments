#include <stdio.h>

void rotateClockwise(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = last;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Before Rotation: ");
    printArray(arr, n);
    rotateClockwise(arr, n);
    printf("After Rotation: ");
    printArray(arr, n);
    return 0;
}