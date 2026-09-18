#include <stdio.h>

char *my_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    // Find length
    while(str[j] != '\0')
    {
        j++;
    }

    j--;

    // Reverse the string
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    return str;
}

int main()
{
    char str[] = "Hello";

    my_strrev(str);

    printf("Reverse = %s", str);

    return 0;
}
