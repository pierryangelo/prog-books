#include <stdio.h>

int main(void)
{
    int fact = 1;

    printf("n\t\tfact\n");
    printf("--------------------\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j > 0; j--)
        {
            fact *= j;
        }
        printf("%2i\t\t%i\n", i, fact);
        fact = 1;
    }
}
