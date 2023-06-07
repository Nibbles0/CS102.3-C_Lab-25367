#include <stdio.h>

int main()
{
    int base, years, sales;
    double allowance, bonus, final;
    char state;
    double allowance2 = 0;

    printf("Enter the base salary: ");
    scanf("%d", &base);

    printf("Enter the number of years worked: ");
    scanf("%d", &years);

    printf("Enter the city you abide in: ");
    scanf(" %c", &state);

    printf("Enter the sales of the individual: ");
    scanf("%d", &sales);

    if (years > 5)
    {
        allowance = base*0.1;
    }

    switch (state)
    {
        case 'C':
        case 'c':
            allowance2 += 2500;
        default:
            allowance2 += 0;    
    }

    if (sales > 0 && sales < 25000)
    {
        bonus = sales*0.1;
    }
    else if (sales >= 25000 && sales < 50000)
    {
        bonus = sales*0.12;
    }
    else if (sales >= 50000)
    {
        bonus = sales*0.15;
    }

    final = base + allowance + allowance2 + bonus;    

    printf("The base salary of %d, would increase to %.2lf, after the additional bonuses.", base, final);


    return 0;
}