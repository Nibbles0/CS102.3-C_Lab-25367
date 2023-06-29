#include <stdio.h>

int main()
{
//Input the Employee no and the Basic Salary of the Employees in an organisation ending with
//the dummy value -999 for Employee no and count the number Employees whose Basic Salary
//>=5000. 

    int empno = 0, base, basec;

    while (empno != -999)
    {
        printf("Enter the employee number : ");
        scanf("%d", &empno);

        printf("Enter the base salary: ");
        scanf("%d", &base);

        if (base >= 5000)
        {
            ++basec;
        }
    }

    printf("%d is the base count.", basec);





    return 0;
}