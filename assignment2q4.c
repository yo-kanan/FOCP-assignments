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
    int count = 0; 
    printf("\nStudents who scored 99 are at positions: ");
    for(i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("%d ", i + 1);
            count++;
        }
    }
    if(count == 0) {
        printf("\nNo student scored 99.\n");
    } else {
        printf("\nTotal number of students who scored 99: %d\n", count);
    }
return 0;
}