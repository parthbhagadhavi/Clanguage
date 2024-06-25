#include <stdio.h>

int main() {
    char ope;
	int  num1, num2, result;


    printf("Enter an operator : ");
    scanf("%c", &ope);


    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);


    switch (ope) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;
        default:
            printf("Error! Invalid operator.");
    }

}