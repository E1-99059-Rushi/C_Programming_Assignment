#include <stdio.h>

int count_ones(int num)
{
    int count = 0;

    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }

        num = num >> 1;
    }

    return count;
}

int main()
{
    int num, count;

    printf("Enter number: ");
    scanf("%d", &num);

    count = count_ones(num);

    printf("Number of 1 bits = %d\n", count);

    return 0;
}
