#include <stdio.h>

void accept(int a[3][3])
{
    int i, j;

    printf("Enter elements:\n");

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

    printf("Array is:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[3][3];

    accept(a);
    display(a);

    return 0;
}
