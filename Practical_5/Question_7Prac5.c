#include <stdio.h>
#include <math.h>

int main()
{
    int count, num1 = 0, num2 = 1, extra, n = 10;

    printf("Fibonacci Sequence: ");

    for (count = 1; count <= n; ++count) {
        printf("%d, ", num1);
        extra = num1 + num2;
        num1 = num2;
        num2 = extra;
    }

    return 0;
}
