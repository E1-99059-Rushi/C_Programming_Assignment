#include <stdio.h>

void remove_chars(char *str1, char *str2)
{
    int i, j;
    int found;

    i = 0;
    j = 0;

    while(str2[i] != '\0')
    {
        found = 0;

        for(int k = 0; str1[k] != '\0'; k++)
        {
            if(str2[i] == str1[k])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            str2[j] = str2[i];
            j++;
        }

        i++;
    }

    str2[j] = '\0';
}

int main()
{
    char str1[50];
    char str2[50];

    printf("Enter string1: ");
    scanf("%s", str1);

    printf("Enter string2: ");
    scanf("%s", str2);

    remove_chars(str1, str2);

    printf("Result = %s", str2);

    return 0;
}
