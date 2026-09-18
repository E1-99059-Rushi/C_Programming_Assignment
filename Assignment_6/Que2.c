#include <stdio.h>

size_t my_strlen(const char *str)
{
    size_t count = 0;

    while(str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char str[] = "Hello";

    printf("Length = %zu", my_strlen(str));

    return 0;
}
