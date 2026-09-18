#include <stdio.h>

int my_atoi(const char *string)
{
    int i = 0;
    int num = 0;

    while(string[i] >= '0' && string[i] <= '9')
    {
        num = num * 10 + (string[i] - '0');
        i++;
    }

    return num;
}

int main()
{
    char str[50];

    printf("Enter number as string: ");
    scanf("%s", str);

    printf("Number = %d", my_atoi(str));

    return 0;
}
