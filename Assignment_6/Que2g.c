#include <stdio.h>

char *my_strchr(const char *str, int ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return (char *)str;
        }

        str++;
    }

    return NULL;
}

int main()
{
    char str[] = "Hello World";
    char *ptr;

    ptr = my_strchr(str, 'W');

    if(ptr != NULL)
    {
        printf("Character found = %c\n", *ptr);
        printf("Remaining string = %s", ptr);
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}
