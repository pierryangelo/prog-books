#include <stdio.h>

int main(void)
{
    int number, sum = 0;
    printf("Insert a number: ");
    scanf("%i", &number);

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    printf("The sum of the digits is: %i\n", sum);
    return 0;
}
