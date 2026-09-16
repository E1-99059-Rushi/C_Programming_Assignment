#include <stdio.h>

void accept(int a[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void add(int a[3][3], int b[3][3], int c[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtract(int a[3][3], int b[3][3], int c[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiply(int a[3][3], int b[3][3], int c[3][3])
{
    int i, j, k;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[3][3], b[3][3];
    int c[3][3];

    printf("Enter first matrix:\n");
    accept(a);

    printf("Enter second matrix:\n");
    accept(b);

    printf("\nAddition:\n");
    add(a, b, c);
    display(c);

    printf("\nSubtraction:\n");
    subtract(a, b, c);
    display(c);

    printf("\nMultiplication:\n");
    multiply(a, b, c);
    display(c);

    return 0;
}
