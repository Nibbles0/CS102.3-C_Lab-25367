#include <stdio.h>

double beta(int x, float y)
{
    return x * (int)y;
}

int main()
{
    printf("%.2lf", beta(10,5));

    return 0;
}