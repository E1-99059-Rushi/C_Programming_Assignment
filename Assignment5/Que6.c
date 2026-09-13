#include <stdio.h>

int remove_duplicate(int a[], int n)
{
    int i, j, k;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    return n;
}

int main()
{
    int a[10] = {1, 2, 2, 3, 4, 3, 5, 5, 6, 1};
    int n = 10;
    int i;

    n = remove_duplicate(a, n);

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nNumber of unique elements = %d\n", n);

    return 0;
}
