#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}
int decimalToBinary(int decimal) {
    int binary = 0, base = 1, remainder;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}
int main() {
int choice, number, result;

    printf("Choose an option:\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        result = binaryToDecimal(number);
        printf("The decimal equivalent of %d is: %d\n", number, result);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        result = decimalToBinary(number);
        printf("The binary equivalent of %d is: %d\n", number, result);
    } else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

return 0;
}