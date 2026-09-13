#include <stdio.h>

int binary_search(int a[], int n, int num)
{
    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == num)
            return mid;

        if(num < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int num, index;

    printf("Enter number: ");
    scanf("%d", &num);

    index = binary_search(a, 5, num);

    printf("Index = %d\n", index);

    return 0;
}
