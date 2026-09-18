#include <stdio.h>

void print_words(int num)
{
    char *words[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    if(num == 0)
    {
        printf("Zero");
        return;
    }

    if(num < 0)
    {
        printf("Minus ");
        num = -num;
    }

    int divisor = 1;

    while(num / divisor >= 10)
    {
        divisor = divisor * 10;
    }

    while(divisor > 0)
    {
        int digit = num / divisor;

        printf("%s ", words[digit]);

        num = num % divisor;
        divisor = divisor / 10;
    }
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    print_words(num);

    return 0;
}
