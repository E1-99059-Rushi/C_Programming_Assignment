#include <stdio.h>

char *my_strstr(const char *str, const char *substr)
{
    int i, j;

    if(*substr == '\0')
    {
        return (char *)str;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(str[i + j] == substr[j] &&
              substr[j] != '\0')
        {
            j++;
        }

        if(substr[j] == '\0')
        {
            return (char *)&str[i];
        }
    }

    return NULL;
}

int main()
{
    char str[] = "Hello World";
    char substr[] = "World";

    char *ptr;

    ptr = my_strstr(str, substr);

    if(ptr != NULL)
    {
        printf("Substring found\n");
        printf("Result = %s", ptr);
    }
    else
    {
        printf("Substring not found");
    }

    return 0;
}
