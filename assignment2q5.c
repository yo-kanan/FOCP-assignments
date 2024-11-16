#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter the marks of %d students:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < n; i++) {
        sum += marks[i];
    }
    printf("The sum of all the scores is: %d\n", sum);
return 0;
}