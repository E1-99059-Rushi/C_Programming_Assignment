#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[5] = {40, 10, 30, 20, 50};
    int i;

    sort(a, 5);

    printf("Sorted array: ");

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
