#include <stdio.h>

int main() {
    char op = 'n';
    int num1, num2;
    float quotient;
    signed int answer;

    printf("Welcome heres a Simple Calculator :-\n");
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Which operation will you like to perform ? (choose by entering the respective symbol)\n");
    printf("+ | Addition\n- | Subtraction\n* | Multiplication\n/ | Division\n%% | Modulus division (Remainder)\n\\ | Integer Division (Quotient)\n");
    scanf("%s",&op);
    
    switch (op) {
        case '+':
            answer = num1 + num2;
            printf("Sum : %d", answer);
            break;
        case '-':
            answer = num1 - num2;
            printf("Difference : %d", answer);
            break;
        case '*':
            answer = num1 * num2;
            printf("Product : %d", answer);
            break;
        case '/':
            quotient = num1 / num2;
            printf("Quotient : %f", quotient);
            break;
        case '%':
            answer = num1 % num2;
            printf("Remainder : %d", answer);
            break;
        case '\\':
            answer = num1 / num2;
            printf("Integer Quotient : %d", answer);
            break;
        default:
            printf("Invalid option.");
    }
    return 0;
}
