#include <stdio.h>

void hexadecimal(int n)
{
    if (n > 15)
        hexadecimal(n / 16);

    int rem = n % 16;

    if (rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem - 10 + 'A');
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Hexadecimal = ");
    hexadecimal(n);

    return 0;
}
