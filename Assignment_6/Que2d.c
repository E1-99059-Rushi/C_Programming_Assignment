#include <stdio.h>

int my_strcmp(const char *str1, const char *str2)
{
    while(*str1 != '\0' && *str2 != '\0')
    {
        if(*str1 != *str2)
        {
            return *str1 - *str2;
        }

        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";

    int result;

    result = my_strcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else if(result < 0)
        printf("str1 is smaller");
    else
        printf("str1 is greater");

    return 0;
}
