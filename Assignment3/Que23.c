#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // spaces
        for(int j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }

        // Pascal values
        for(int r = 0; r <= i; r++)
        {
            int value = factorial(i) /
                        (factorial(r) * factorial(i - r));

            printf("%d   ", value);
        }

        printf("\n");
    }

    return 0;
}
