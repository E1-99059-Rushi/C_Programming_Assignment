#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int rows, int columns)
{
    int **a;
    int i;

    a = malloc(rows * sizeof(int *));

    for(i = 0; i < rows; i++)
    {
        a[i] = malloc(columns * sizeof(int));
    }

    return a;
}

void freeMatrix(int **a, int rows)
{
    int i;

    for(i = 0; i < rows; i++)
    {
        free(a[i]);
    }

    free(a);
}

int main()
{
    int **a;
    int rows = 3;
    int columns = 3;
    int i, j;

    a = allocateMatrix(rows, columns);

    printf("Enter elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    freeMatrix(a, rows);

    return 0;
}
