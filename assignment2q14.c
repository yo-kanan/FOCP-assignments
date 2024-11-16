#include <stdio.h>

void printDuplicates(int arr[], int n) {
    int foundDuplicate = 0;
    for (int i = 0; i < n; i++) {
        if (arr[abs(arr[i])] >= 0) {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        } else {
            printf("%d ", abs(arr[i]));  
            foundDuplicate = 1;
        }
    }
    if (!foundDuplicate) {
        printf("-1\n"); 
    }
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
    printDuplicates(arr, n);
    return 0;
}