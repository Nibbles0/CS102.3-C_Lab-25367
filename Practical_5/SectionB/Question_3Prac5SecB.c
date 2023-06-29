#include <stdio.h>

int main()
{

//Input price of 10 items and display the average value of an Item , number of items which the price is greater than 200.

    int price, great = 0, total = 0, count = 1;

    while (count <= 10)
    {
        printf("Enter the price of the item %d: ", count);
        scanf("%d", &price);

        if (price > 200)
        {
            ++great;
        }

        total += price;
        ++count;

    }

    printf("%d is the number of products greater than 200\n%.2lf is the avg", great, (double)total/10);










    return 0;
}