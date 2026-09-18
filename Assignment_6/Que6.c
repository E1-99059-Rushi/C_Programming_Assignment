#include <stdio.h>

char *my_itoa(int value, char *string, int base)
{
    char digits[] = "0123456789ABCDEF";
    int i = 0;
    int negative = 0;
    int temp;
    char ch;

    if(value == 0)
    {
        string[0] = '0';
        string[1] = '\0';
        return string;
    }

    if(value < 0)
    {
        negative = 1;
        value = -value;
    }

    while(value > 0)
    {
        temp = value % base;
        string[i] = digits[temp];
        i++;
        value = value / base;
    }

    if(negative)
    {
        string[i] = '-';
        i++;
    }

    string[i] = '\0';

    // Reverse string
    int start = 0;
    int end = i - 1;

    while(start < end)
    {
        ch = string[start];
        string[start] = string[end];
        string[end] = ch;

        start++;
        end--;
    }

    return string;
}

int main()
{
    char str[50];

    my_itoa(1234, str, 10);

    printf("String = %s", str);

    return 0;
}
