#include <stdio.h>

int main(void)
{
    printf("Insert 2 numbers separated by space: ");
    int a, b;
    scanf("%i %i,", &a, &b);

    if (a % b == 0)
    {
        printf("The first is divisible by the second\n");
        return 0;
    }

    printf("The first is not divisible by the second\n");
    return 1;
}
