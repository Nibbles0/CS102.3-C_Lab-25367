#include <stdio.h>
#include <math.h>

int main()
{
    int num, num1, num2 = 0, remainder, extra;

    printf("Enter a numerical value: ");
    scanf("%d", &num);

    extra = num;

    while (num > 0)
    {
        remainder = num %10;
        num1 = remainder*remainder*remainder;
        num2 += num1;
        num /= 10;
    }

    if (extra == num2)
    {
        printf("%d is an Armstrong Number.", extra);
    }
    else if (extra != num2)
    {
        printf("The value of %d, is not an Armstrong number.", extra);
    }
    
    return 0;
}
