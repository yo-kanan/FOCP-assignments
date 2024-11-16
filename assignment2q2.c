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
    printf("\nGrades of the students:\n");
    for(i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        if(marks[i] >= 75) {
            printf("A Grade\n");
        } else if(marks[i] >= 60) {
            printf("B Grade\n");
        } else if(marks[i] >= 40) {
            printf("C Grade\n");
        } else {
            printf("D Grade\n");
        }
    }
return 0;
}