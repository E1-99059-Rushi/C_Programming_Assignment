#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[])
{
    int num;

    if (argc != 2)
    {
        printf("Usage: ./a.out number\n");
        return 0;
    }

    num = atoi(argv[1]);

    printf("Number = %d\n", num);
    printf("Binary = ");

    binary(num);

    return 0;
}
