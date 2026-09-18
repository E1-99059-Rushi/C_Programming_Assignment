#include <stdio.h>

void binary(int num)
{
    int bit[32];
    int i = 0;

    while (num > 0)
    {
        bit[i] = num & 1;
        num = num >> 1;
        i++;
    }

    while (i > 0)
    {
        i--;
        printf("%d", bit[i]);
    }
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Binary = ");
    binary(num);

    return 0;
}
