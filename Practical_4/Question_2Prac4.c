#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("--Pick one of the following operators--\n<+> Addition\n<-> Subtraction\n</> Division\n<*> Multiplication\n---------------------------------------\n Input: ");
    scanf(" %c", &operator);
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);

    switch (operator)
    {
        case '+':
            printf("%d + %d = %d", num1, num2, num1+num2);
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, num1-num2);
            break;
        case '/':
            printf("%d / %d = %d", num1, num2, num1/num2);
            break;
        case '*':
            printf("%d * %d = %d", num1, num2, num1*num2);
            break;
        default:
            printf("Invalid operator.");
            break;                
    }

    return 0;
}