#include <stdio.h>
#include <string.h>

void find_replace(char *source, char *find, char *replace, char *result)
{
    char *pos;
    char temp[200];

    result[0] = '\0';

    while((pos = strstr(source, find)) != NULL)
    {
        // Copy part before "find"
        strncpy(temp, source, pos - source);
        temp[pos - source] = '\0';

        strcat(result, temp);
        strcat(result, replace);

        // Move source after found string
        source = pos + strlen(find);
    }

    // Add remaining part
    strcat(result, source);
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
