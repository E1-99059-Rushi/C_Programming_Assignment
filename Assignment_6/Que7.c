#include <stdio.h>

void decimal_to_roman(int num, char *roman)
{
    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    int i = 0;
    int j = 0;

    while(num > 0)
    {
        while(num >= values[i])
        {
            for(j = 0; symbols[i][j] != '\0'; j++)
            {
                roman[strlen(roman)] = symbols[i][j];
            }

            roman[strlen(roman) + 1] = '\0';

            num = num - values[i];
        }

        i++;
    }
}
