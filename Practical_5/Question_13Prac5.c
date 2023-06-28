#include <stdio.h>

int main()
{
    int num, total = 0;

    while (num != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        total += num;
    }

    printf("%d is the total.", total);







    return 0;
}