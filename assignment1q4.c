#include <stdio.h>

void swapUsingTemp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void swapUsingBitwise(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void swapUsingPointers(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
    printf("Inside swapUsingPointers (addresses swapped, no effect outside function): a = %d, b = %d\n", *a, *b);
}
int main() {
    int num1, num2;
    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingTemp(&num1, &num2);
    printf("After swapUsingTemp: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingArithmetic(&num1, &num2);
    printf("After swapUsingArithmetic: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingBitwise(&num1, &num2);
    printf("After swapUsingBitwise: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingPointers(&num1, &num2);
    printf("After swapUsingPointers: num1 = %d, num2 = %d (values remain unchanged outside function)\n", num1, num2);

return 0;
}