#include <stdio.h>

void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertAtFront(int arr[], int *n, int value) {
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    (*n)++;
}
void insertAtEnd(int arr[], int *n, int value) {
    arr[*n] = value;
    (*n)++;
}
void insertAtPosition(int arr[], int *n, int value, int pos) {
    for (int i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    (*n)++;
}
int main() {
    int n, choice, value, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; 
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Before Insertion: ");
    printArray(arr, n);
    printf("\nChoose the insertion type:\n");
    printf("1. Insert at Front\n2. Insert at End\n3. Insert at a Specific Position\n");
    scanf("%d", &choice);

switch (choice) {
        case 1:
            printf("Enter value to insert at front: ");
            scanf("%d", &value);
            insertAtFront(arr, &n, value);
            break;
        case 2:
            printf("Enter value to insert at end: ");
            scanf("%d", &value);
            insertAtEnd(arr, &n, value);
            break;
        case 3:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            printf("Enter position to insert (1 to %d): ", n + 1);
            scanf("%d", &pos);
            if (pos > 0 && pos <= n + 1) {
                insertAtPosition(arr, &n, value, pos);
            } else {
                printf("Invalid position!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
 printf("After Insertion: ");
    printArray(arr, n);
return 0;
}