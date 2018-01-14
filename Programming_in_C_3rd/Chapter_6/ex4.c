#include <stdio.h>

int main(void)
{
    float accumulator = 0, value = 0;
    char operation;

    printf("Begin Calculations\n");

    do
    {
        scanf("%f %c", &value, &operation);

        switch (operation)
        {
            case 'S':
            case 's':
                accumulator = value;
                break;
            case 'e':
            case 'E':
                break;
            case '+':
                accumulator += value;
                break;
            case '-':
                accumulator -= value;
                break;
            case '*':
                accumulator *= value;
                break;
            case '/':
                accumulator = value != 0 ? accumulator / value : accumulator;
                break;
            default:
                printf("Type a valid operation: + - * / S E\n");
        }

        printf("= %f\n", accumulator);

    } while (operation != 'e' && operation != 'E');

    return 0;
}
