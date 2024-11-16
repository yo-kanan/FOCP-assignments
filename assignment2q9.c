#include <stdio.h>

int findPeak(int arr[], int n) {
    if (arr[0] >= arr[1]) {
        return 0;  
    }
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;  
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;  
        }
    }
    return -1;
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
    int peakIndex = findPeak(arr, n);
    if (peakIndex != -1) {
        printf("Peak element is %d at index %d.\n", arr[peakIndex], peakIndex);
    } else {
        printf("No peak element found.\n");
    }
return 0;
}