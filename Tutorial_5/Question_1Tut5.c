#include <stdio.h>

int main()
{

    //Switch

    int num1, num2, op;

    printf("Enter a numerical input: ");
    scanf("%d", &num1);
    printf("Enter a numerical input: ");
    scanf("%d", &num2);    
    printf("-------------------\n1. +\n2. -\n3. *\n4. /\n-------------------\nEnter an operator: ");
    scanf("%d", &op);    

    switch (op)
    {
        case 1:
            printf("%d + %d = %d", num1, num2, num1+num2);
            break;
        case 2:
            printf("%d - %d = %d", num1, num2, num1-num2);    
            break;
        case 3:
            printf("%d * %d = %d", num1, num2, num1*num2);  
            break;
        case 4:
            printf("%d / %d = %d", num1, num2, num1/num2);    
            break;
        default:
            printf("Not an option.");
            break;                              
    }




    return 0;
}