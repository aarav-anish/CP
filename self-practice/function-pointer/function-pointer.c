#include <stdio.h>

enum
{
    ADDITION = 1,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION
};

void addition(int a, int b, int *target)
{
    *target = a + b;
    return;
}

void subtraction(int a, int b, int *target)
{
    *target = a - b;
    return;
}

void multiplication(int a, int b, int *target)
{
    *target = a * b;
    return;
}

void division(int a, int b, int *target)
{
    *target = a / b;
    return;
}

int main()
{
    int a, b, result;
    int operation;

    void (*fptr)(int, int, int *);

    printf("Press 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division and 0 to exit the program\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case ADDITION:
        fptr = addition;
        break;
    case SUBTRACTION:
        fptr = subtraction;
        break;
    case MULTIPLICATION:
        fptr = multiplication;
        break;
    case DIVISION:
        fptr = division;
        break;
    case 0:
        return 0;
    default:
        printf("Invalid operation\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    fptr(a, b, &result);
    printf("Result: %d\n", result);

    return 0;
}