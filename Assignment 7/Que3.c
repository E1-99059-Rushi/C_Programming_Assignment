#include <stdio.h>

int rowSum(int a[3][3], int row)
{
    int j, sum = 0;

    for(j = 0; j < 3; j++)
    {
        sum = sum + a[row][j];
    }

    return sum;
}

int columnSum(int a[3][3], int column)
{
    int i, sum = 0;

    for(i = 0; i < 3; i++)
    {
        sum = sum + a[i][column];
    }

    return sum;
}

int main()
{
    int a[3][3];
    int i, j, row, column;

    printf("Enter matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number (0-2): ");
    scanf("%d", &row);

    printf("Enter column number (0-2): ");
    scanf("%d", &column);

    printf("Row sum = %d\n", rowSum(a, row));
    printf("Column sum = %d\n", columnSum(a, column));

    return 0;
}
