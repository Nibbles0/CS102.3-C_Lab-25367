#include <stdio.h>

int main()
{
    //Question 1

    int num, result;

    printf("enter a numerical value: ");
    scanf("%d", &num);

    result = num % 2;

    if (result == 1)
    {
        printf("this is wack but like, shii it's odd yk");
    }
    else
    {
        printf("this is swaggers like it's even af.");
    }

    //Question 1 (part 2)
    int num, result;

    printf("enter a numerical value: ");
    scanf("%d", &num);

    result = num % 2;

    switch (result)
    {
        case 1:
            printf("This like aint evening yk it's odd.");
            break;
        case 0:
            printf("This like so cool like it's even.");
            break;
        default:
            printf("You aint col bruj.");
            break;        
    }

    return 0;
}