#include <stdio.h>

int main()
{
    //Write a C program to print all factors of a given integer.

    int num, count = 1;

    printf("Enter a numerical input: ");
    scanf("%d", &num);

    printf("The factors of %d, is: ", num);

    while (count <= num)
    {
        if ((num%count) == 0)
        {
            printf("%d ", count);
            ++count;
        }
        else if((num%count) > 0)
        {
            ++count;
        }
    }


    return 0;
}

