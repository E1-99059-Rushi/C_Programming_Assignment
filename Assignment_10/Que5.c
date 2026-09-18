#include <stdio.h>

void check_alphabet(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z'))
    {
        printf("It is an alphabet\n");

        ch = ch ^ 32;

        printf("After XOR with 32 = %c\n", ch);
    }
    else
    {
        printf("It is not an alphabet\n");
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    check_alphabet(ch);

    return 0;
}
