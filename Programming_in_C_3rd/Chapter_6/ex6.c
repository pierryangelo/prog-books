#include <stdio.h>

int main(void)
{
    int input;
    printf("Insert a number: ");
    scanf("%i", &input);

    // in case the input is zero
    if (input == 0)
    {
        printf("zero\n");
        return 0;
    }

    // counts the number of the zeros until a valid digit (not zero)
    int new_number = input, zero_counts = 0;
    while (new_number % 10 == 0)
    {
        new_number /= 10;
        zero_counts++;
    }

    // counts the number of the remaining digits
    int digits_count = 0, temp = new_number;
    while (temp > 0)
    {
        temp /= 10;
        ++digits_count;
    }

    // invert the number
    int digit, sum = 0;
    while (new_number > 0)
    {
        digit = new_number % 10;
        for (int i = digits_count - 1; i > 0; i--)
        {
            digit *= 10;
        }
        sum += digit;
        new_number /= 10;
        digits_count--;
    }

    while (sum > 0)
    {
        digit = sum % 10;

        switch (digit)
        {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
        sum /= 10;
        if (sum != 0)
        {
            printf(" ");
        }
    }

    // prints the remaining zeros
    while (zero_counts > 1)
    {
        printf(" zero ");
        zero_counts--;
    }

    printf("zero\n");
}
