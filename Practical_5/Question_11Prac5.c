#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to print all factors of a given integer.

    int num, count = 1, i = 0;

    printf("Enter a numerical input: ");
    scanf("%d", &num);

    while (count <= num)
    {
        if ((num%count) == 0)
        {
            ++i;
            ++count;
        }
        else if((num%count) > 0)
        {
            ++count;
        }
    }

    int ii[i];
    int count1 = 0;
    count = 1;

    int value = i;

    while (count1 <= value)
    {
        if ((num%count) == 0)
        {
            ii[count1] = num;
            ++count1;
            ++count;
        }
        else if((num%count) > 0)
        {
            ++count;
        }
    }

    for (count = 0; count <= i; ++count)
    {
        printf("%d, ", ii[count]);
    }


    return 0;
}
