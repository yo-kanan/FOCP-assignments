#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter the marks of %d students:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < n; i++) {
        marks[i] += 5;
    }
    printf("\nUpdated marks after adding 5:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }

return 0;
}