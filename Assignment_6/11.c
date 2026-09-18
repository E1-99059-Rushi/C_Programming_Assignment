#include <stdio.h>

int my_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int match(char *str, char *find)
{
    int i = 0;

    while(find[i] != '\0')
    {
        if(str[i] != find[i])
        {
            return 0;
        }

        i++;
    }

    return 1;
}

void find_replace(char *source, char *find, char *replace, char *result)
{
    int i = 0;
    int j = 0;
    int k;

    int find_len = my_strlen(find);

    while(source[i] != '\0')
    {
        if(match(&source[i], find))
        {
            k = 0;

            while(replace[k] != '\0')
            {
                result[j] = replace[k];
                j++;
                k++;
            }

            i = i + find_len;
        }
        else
        {
            result[j] = source[i];

            i++;
            j++;
        }
    }

    result[j] = '\0';
}

int main()
{
    char source[] = "This is test time";
    char find[] = "is";
    char replace[] = "was";
    char result[200];

    find_replace(source, find, replace, result);

    printf("Result = %s", result);

    return 0;
}
