#include <stdio.h>

void remove_char(char *str, char ch)
{
    int i = 0;
    int j = 0;

    while(str[i] != '\0')
    {
        if(str[i] != ch)
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';
}

int main()
{
    char str[50];
    char ch;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to remove: ");
    scanf(" %c", &ch);

    remove_char(str, ch);

    printf("Result = %s", str);

    return 0;
}
