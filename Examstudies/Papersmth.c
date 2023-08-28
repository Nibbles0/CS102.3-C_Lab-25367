#include <stdio.h>


int main()
{

    int x, y;
    int ext[5];
    ext[0] = 1;
    ext[1] = 2;
    ext[2] = 3;
    ext[3] = 4;
    ext[4] = 5;



    
    for (x = 0; x < 6; ++x)
    {
        for (y = 0; y < x; ++y)
        {
            printf("%d ", ext[y]);
        }
        printf("\n");
    }

    for (x = 4; x > 0; --x)
    {
        for (y = 0; y < x; ++y)
        {
            printf("%d ", ext[y]);
        }
        printf("\n");
    }





    return 0;
}