#include <stdio.h>

int main(void)
{
    printf("n\t\tnˆ2\n");
    printf("-------------------------\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%2i\t\t%3i\n", i, i * i);
    }
    return 0;
}
