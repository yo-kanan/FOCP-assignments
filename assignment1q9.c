#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("01");
        }
        if (i > 1 && i < rows) {
            for (int k = 1; k <= (rows - i) * 2; k++) {
                printf(" ");
            }
            for (int j = 1; j <= i; j++) {
                printf("01");
            }
        }
        printf("\n"); 
    }
return 0;
}