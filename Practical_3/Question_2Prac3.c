#include <stdio.h>

int main()
{

    int numero1, numero2, numero3;
    
    printf("Enter 3 numerical values: ");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3)
        printf("highest value would be %d, & ", numero1);
    else if (numero2 >= numero1 && numero2 >= numero3)
        printf("highest value would be %d, & ", numero2);
    else
        printf("Highest value would be %d, & ", numero3);

    if (numero1 <= numero2 && numero1 <= numero3)
        printf("the smallest value would be %d.", numero1);
    else if (numero2 <= numero1 && numero2 <= numero3)
        printf("the smallest value would be %d.", numero2);
    else
        printf("the smallest value would be %d.", numero3);



    return 0;
}