#include <stdio.h>

int calculator(int a, int b, char op, int *result)
{
    switch (op)
    {
        case '+':
            *result = a + b;
            return 0;

        case '-':
            *result = a - b;
            return 0;

        case '*':
            *result = a * b;
            return 0;

        case '/':
            if (b == 0)
                return 1;       // Error: zero denominator

            *result = a / b;
            return 0;

        default:
            return 2;           // Invalid operator
    }
}

int main()
{
    int a, b, result, error;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    error = calculator(a, b, op, &result);

    if (error == 0)
        printf("Result = %d\n", result);
    else if (error == 1)
        printf("Error: Division by zero\n");
    else
        printf("Error: Invalid operator\n");

    return 0;
}
