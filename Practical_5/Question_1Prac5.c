#include <stdio.h>

int main()
{
    int num = 0;

    //While loop

    while (num <=100)
    {
        printf("%d\n", num);
        ++ num;
    }

    //Do.. while loop

    do {
        printf("%d\n", num);
        ++ num;
    }
    while (num <= 100);

    //For loop

    for (num = 0; num <= 100; ++num)
    {
        printf("%d\n", num);
    }



    return 0;
}