#include <stdio.h>


int main()
{

    int num, total = 0, i;

    for (i = 1; i <= 10; ++i)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        total += num;
    }

    printf("%.2lf is the average. ", (double)total/10.0);

    // part 2

    int x,y;

    for (x = 1; x <= 5; ++x)
    {
        for (y = 1; y <= x; ++y)
        {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}