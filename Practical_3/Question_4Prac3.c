#include <stdio.h>

int main()
{
    double pi = 3.14159;
    double diameter, circum, aoc, radi;

    printf("Enter the radius value: ");
    scanf("%lf", &radi);
    
    diameter = radi*2;
    circum = 2*pi*radi;
    aoc = pi*(radi*radi);

    printf("The diameter %.2lf, has the circumference of %.2lf, with the area of %.2lf.", diameter, circum, aoc);
    



    return 0;
}