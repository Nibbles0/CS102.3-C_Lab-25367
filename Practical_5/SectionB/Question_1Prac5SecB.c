#include <stdio.h>

int main()
{

    int num, posc = 0, negc = 0, zerc = 0, count = 0;

    while (count < 10)
    {
        printf("Enter a number");
        scanf("%d", &num);

        if (num < 0)
        {
            ++negc;
        }
        else if (num > 0)
        {
            ++posc;
        }
        else if (num == 0)
        {
            ++zerc;
        }
        ++count;
    }

    printf("%d is positive\n%d is negative\n%d is zeros", posc, negc, zerc);






    return 0;
}