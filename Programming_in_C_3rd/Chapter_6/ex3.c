#include <stdio.h>

int main(void)
{
    float a, b;
    printf("Type to numbers separated by one space: ");
    scanf("%f %f", &a, &b);

    if (b)
    {
        printf("%.3f\n", (a / b));
        return 0;
    }

    printf("The second number must be different from zero!\n");
    return 1;
}
