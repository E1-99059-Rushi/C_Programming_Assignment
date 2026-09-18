#include <stdio.h>

void check_parity(unsigned char num)
{
    int count = 0;
    unsigned char temp;

    temp = num;

    while (temp > 0)
    {
        if (temp & 1)
        {
            count++;
        }

        temp = temp >> 1;
    }

    if (count % 2 == 0)
    {
        printf("Even parity\n");
        printf("Number = %u\n", num);
    }
    else
    {
        printf("Odd parity\n");

        num = num | 128;

        printf("After setting MSB = %u\n", num);
    }
}

int main()
{
    unsigned char num;

    printf("Enter byte value: ");
    scanf("%hhu", &num);

    check_parity(num);

    return 0;
}
