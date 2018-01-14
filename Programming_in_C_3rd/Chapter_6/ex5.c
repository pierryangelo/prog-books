#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number;
    bool isnegative;

    printf("Insert the number to be reversed: ");
    scanf("%i", &number);

    if (number < 0)
    {
        isnegative = true;
        number = -number;
    }

    while (number >= 0)
    {
        printf("%i", number % 10);
        number /= 10;

        if (number == 0)
            break;
    }
    if (isnegative)
    {
        printf("-");
    }

    printf("\n");
}
