#include <stdio.h>

int main()
{
    int num1, num2, result;


    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);


    result = num1 % num2;

    if (result != 1)
    {
        printf("The value %d, is a multiple of %d.", num1, num2);
    }
    else 
    {
        printf("The value %d, is not a multiple of %d.", num1, num2);
    }




    return 0;
}