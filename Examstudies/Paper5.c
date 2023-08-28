#include <stdio.h>

int main()
{

    int x, y;
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    int xtra;



        for (x = 0; x < 3; ++x)
        {
            for (y = 0; y < 3; ++y)
            {
                printf("Enter a value: ");
                scanf("%d" &xtra);

                if ((xtra % 2) = 0)
                {
                    arr1[x][y] = xtra;
                    arr2[x][y] = 0;    
                }
                else 
                {
                    arr2[x][y] = xtra;
                    arr1[x][y] = 0;
                }
            }
        }

    int RAHH = 10000000000000000000000, extraa = 0;

    for (x = 0; x < 3; ++x)
    {
        for (y = 0; y < 3; ++y)
        {
            if (arr1[x][y] < RAHH)
            {
                RAHH = arr1[x][y];
            }
            else if 
        }
    }



    return 0;
}