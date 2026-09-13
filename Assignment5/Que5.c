#include <stdio.h>

void max_min(int arr[], int n, int *max, int *min)
{
    int i;

    *max = arr[0];
    *min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];

        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int arr[100], n;
    int max, min;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max_min(arr, n, &max, &min);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
