#include <stdio.h>

int main()
{

    int num, value = 2, i = 0;

    printf("Enter a numerical value: ");
    scanf("%d", &num);


    while (value < num)
    {
        if ((num % value) == 0)
        {
            ++i;
            break;
        }
        else if ((num % value) > 0)
        {
            ++value;
        }
    }

    if ((num <= 1)&&(num >= 0))
    {
        printf("%d is not a prime value", num);
    }
    else if (num == 2)
    {
        printf("%d is a prime value", num);
    }
    else if (i > 0)
    {
        printf("%d is not a prime value", num);
    }
    else 
    {
        printf("%d is a prime value", num);
    }

    











    return 0;
}