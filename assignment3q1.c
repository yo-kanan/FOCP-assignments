#include <stdio.h>
#include <math.h>  

void add();
void subtract();
void multiply();
void divide();
void logarithm();
void square_root();

int main() {
    int choice;
    while(1) {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithm (base 10)\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
                add();
                break;
            case 2: 
                subtract();
                break;
            case 3: 
                multiply();
                break;
            case 4: 
                divide();
                break;
            case 5: 
                logarithm();
                break;
            case 6: 
                square_root();
                break;
            case 7: 
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
void add() {
    double num1, num2;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 + num2);
}
void subtract() {
    double num1, num2;
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 - num2);
}
void multiply() {
    double num1, num2;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 * num2);
}
void divide() {
    double num1, num2;
    printf("Enter two numbers to divide: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Result: %.2lf\n", num1 / num2);
    }
}
void logarithm() {
    double num;
    printf("Enter a number to calculate its logarithm (base 10): ");
    scanf("%lf", &num);
    if (num <= 0) {
        printf("Error: Logarithm of non-positive numbers is undefined.\n");
    } else {
        printf("Logarithm (base 10) of %.2lf is: %.2lf\n", num, log10(num));
    }
}
void square_root() {
    double num;
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &num);
    if (num < 0) {
        printf("Error: Square root of negative numbers is undefined.\n");
    } else {
        printf("Square root of %.2lf is: %.2lf\n", num, sqrt(num));
    }
}
