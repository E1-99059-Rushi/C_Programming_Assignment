#include <stdio.h>

int sum, product;

void calculate(int a, int b)
{
    sum = a + b;
    product = a * b;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
