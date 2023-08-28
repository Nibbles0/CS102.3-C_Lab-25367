#include <stdio.h>
int main()
{
    int arr[2][2];


    printf("Diagonal Values:\n");
    for(int i = 0; i < 4;  i++) {
        printf("%-5d", arr[i][i]);
    }
    printf("\n");

    return 0;
}