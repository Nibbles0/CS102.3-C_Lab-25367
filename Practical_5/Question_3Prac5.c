#include <stdio.h>

int main()
{
    int num1, total, count = 0;

    printf("Enter a numerical value to find the factorial of: ");
    scanf("%d", &num1);

    total = num1;
    count = num1;

    if (count > 1)
    {
        while (count > 1)
        {
            --count;
            total *= count;
        }
        printf("The value for %d! would be: %d", num1, total);
    }
    else 
    {
        printf("The value for %d! would be: %d", num1, total);
    }

    return 0;
}