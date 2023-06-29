#include <stdio.h>

int main()
{

//. Input Marks of 10 students and output the maximum , minimum and average Marks.

    int marks, maximum = 0, mini = 100, total = 0, count = 1;

    while (count <= 10)
    {
        printf("Enter the mark number %d: ", count);
        scanf("%d", &marks);

        if (marks > maximum)
        {
            maximum = marks;

        }
        if (marks < mini)
        {
            mini = marks;
        }

        total += marks;
        ++count;

    }

    printf("%d is the maximum\n%d is the minimum\n%.2lf is the avg", maximum, mini, (double)total/10);








    return 0;
}