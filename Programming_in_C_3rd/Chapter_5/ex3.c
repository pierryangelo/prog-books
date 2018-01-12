#include <stdio.h>

int main(void)
{
    printf("n\t\ttriangular number\n");
    printf("---------------------------------\n");

    for (int i = 5; i <= 50; i += 5)
    {
        printf("%2i\t\t%3i\n", i, i * (i + 1) / 2);
    }
}
