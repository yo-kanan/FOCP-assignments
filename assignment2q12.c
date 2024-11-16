#include <stdio.h>

void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deleteAtFront(int arr[], int *n) {
    for (int i = 0; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;  
}
void deleteAtEnd(int arr[], int *n) {
    (*n)--;  
}
void deleteAtPosition(int arr[], int *n, int pos) {
    for (int i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--; 
}
int main() {
    int n, choice, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Before Deletion: ");
    printArray(arr, n);

    printf("\nChoose the deletion type:\n");
    printf("1. Delete at Front\n2. Delete at End\n3. Delete at a Specific Position\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            deleteAtFront(arr, &n);
            break;
        case 2:
            deleteAtEnd(arr, &n);
            break;
        case 3:           
            printf("Enter position to delete (1 to %d): ", n);
            scanf("%d", &pos);
            if (pos > 0 && pos <= n) {
                deleteAtPosition(arr, &n, pos);
            } else {
                printf("Invalid position!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    printf("After Deletion: ");
    printArray(arr, n);
    return 0;
}