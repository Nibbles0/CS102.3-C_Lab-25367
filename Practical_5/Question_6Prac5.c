#include <stdio.h>
#include <math.h>

int main()
{
    int num, exponent, count = 0, total, extra;

    printf("Enter a numerical value: ");
    scanf("%d", &num);
    printf("Enter a exponent value: ");
    scanf("%d", &exponent);

    count += exponent;
    extra = num;
    
    if (count == 1)
    {
        printf("%d, is the output.", num);
    }
    else if (count == 0)
    {
        printf("1, is the output.");
    }
    else if (count >1)
    {
        while (count > 1)
        {
            extra = extra * num;
            --count;
        }
        printf("%d, is the output.", extra);
    }
    else
    {
        printf("Something went wrong.");
    }

    return 0;
}
