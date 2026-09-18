#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    // Find the end of dest
    while(dest[i] != '\0')
    {
        i++;
    }

    // Copy src at the end of dest
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

int main()
{
    char dest[30] = "Hello ";
    char src[] = "World";

    my_strcat(dest, src);

    printf("String = %s", dest);

    return 0;
}
