#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    if (argc < 4) {
        printf("Usage: %s <num1> <num2> <operation>\n", argv[0]);
        printf("Allowed symbols : + - . / %% \\");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    char operation = argv[3][0];
    float quotient;
    signed int answer;

    if (operation == '/' && num2 == 0) {
        printf("Invalid operation: Cannot divide by Zero.\n");
        return 1;
    }
    
    switch (operation) {
        case '+':
            answer = num1 + num2;
            printf("Sum : %d\n", answer);
            break;
        case '-':
            answer = num1 - num2;
            printf("Difference : %d\n", answer);
            break;
        case '.':
            answer = num1 * num2;
            printf("Product : %d\n", answer);
            break;
        case '/':
            quotient = num1 / (float) num2;
            printf("Quotient : %f\n", quotient);
            break;
        case '%':
            answer = num1 % num2;
            printf("Remainder : %d\n", answer);
            break;
        case '\\':
            answer = num1 / num2;
            printf("Integer Quotient : %d\n", answer);
            break;
        default:
            printf("Invalid operation: choose one of : + - . / %% \\.\n");
            return 1;
    }

    return 0;
}
