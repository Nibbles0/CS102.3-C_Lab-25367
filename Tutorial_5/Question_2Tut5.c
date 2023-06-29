#include <stdio.h>

int main()
{

    int num, evenc = 0, oddc = 0, result, count = 1;

    while (count <= 10)
    {
    printf("enter a numerical value: ");
    scanf("%d", &num);

    result = num % 2;

    if (result == 0)
    {
        ++evenc;
    }
    else
    {
        
        ++oddc;
    }
    ++count;
    }
    printf("%d is even, %d is odd.", evenc, oddc);
   
    // Part 2

    int num, evenc = 0, oddc = 0, result;

    while (num != -99)
    {
    printf("enter a numerical value: ");
    scanf("%d", &num);

    result = num % 2;

    if (result == 0)
    {
        ++evenc;
    }
    else
    {
        
        ++oddc;
    }
    }
    printf("%d is even, %d is odd.", evenc, oddc);

    return 0;
}