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
    int found = 0;
    for(i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("The first student who scored 99 is at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("No student scored 99.\n");
    }
return 0;
}