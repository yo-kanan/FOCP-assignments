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
        if(marks[i] % 2 == 0) {
            printf("Score of student %d is Even: %d\n", i + 1, marks[i]);
        } else {
            printf("Score of student %d is Odd: %d\n", i + 1, marks[i]);
        }
    }
return 0;
}