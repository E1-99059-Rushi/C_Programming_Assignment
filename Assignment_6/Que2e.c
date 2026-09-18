#include <stdio.h>

char to_lower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    return ch;
}

int my_stricmp(const char *str1, const char *str2)
{
    char ch1, ch2;

    while(*str1 != '\0' || *str2 != '\0')
    {
        ch1 = to_lower(*str1);
        ch2 = to_lower(*str2);

        if(ch1 != ch2)
        {
            return ch1 - ch2;
        }

        str1++;
        str2++;
    }

    return 0;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "HELLO";

    int result;

    result = my_stricmp(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
