#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    printf("Enter the marks of %d students: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    int max = marks[0];
    int min = marks[0];
    for (i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    printf("Maximum Marks: %d\n", max);
    printf("Minimum Marks: %d\n", min);
return 0;
}