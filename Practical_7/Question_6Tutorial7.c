#include <stdio.h>

void beta(int x, int y)
{
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d", x, y, x+y, x, y, x-y, x, y, x*y);
}

int main()
{

    beta(10,5);


    return 0;
}