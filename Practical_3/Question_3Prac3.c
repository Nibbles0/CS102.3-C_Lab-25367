#include <stdio.h>

int main()
{
    char empname[50];
    int baseS, newS;

    printf("Enter the employee name: ");
    scanf("%s", empname);
    printf("Enter the basic salary: ");
    scanf("%d", &baseS);

    if (baseS < 5000) {
        newS = baseS + (baseS * 0.05);
        printf("The individual %s, has a salary of %d.", empname, newS);
    } 
    else if ((baseS >= 5000) && (baseS < 10000)) {
        newS = baseS + (baseS * 0.10);
        printf("The individual %s, has a salary of %d.", empname, newS);
    } 
    else if (baseS >= 10000) {
        newS = baseS + (baseS * 0.15);
        printf(" individual %s, has a salary of %d.", empname, newS);
    } 
    else {
        printf("Something went wrong.");
    }
    



    return 0;
}