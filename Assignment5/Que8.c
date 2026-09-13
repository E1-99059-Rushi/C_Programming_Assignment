#include <stdio.h>

int search(int a[], int n, int num)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
            return i;
    }

    return -1;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int num, index;

    printf("Enter number to search: ");
    scanf("%d", &num);

    index = search(a, 5, num);

    if(index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
