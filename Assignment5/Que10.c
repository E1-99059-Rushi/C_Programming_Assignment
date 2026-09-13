#include <stdio.h>

int *linear_search(int a[], int n, int num)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
            return &a[i];
    }

    return NULL;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int num;
    int *p;

    printf("Enter number: ");
    scanf("%d", &num);

    p = linear_search(a, 5, num);

    if(p != NULL)
        printf("Element found, Address = %p\n", (void *)p);
    else
        printf("Element not found\n");

    return 0;
}
