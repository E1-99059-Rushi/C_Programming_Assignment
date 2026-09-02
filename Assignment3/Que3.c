#include <stdio.h>

int main()
{
    int num, temp, digit;
    int sum = 0, reverse = 0, armstrong = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // a) Sum of digits
    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of digits = %d\n", sum);


    // b) Reverse the number
    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Reverse = %d\n", reverse);


    // c) Numeric palindrome
    if(num == reverse)
        printf("%d is a numeric palindrome\n", num);
    else
        printf("%d is not a numeric palindrome\n", num);


    // d) Armstrong number
    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        armstrong = armstrong + digit * digit * digit;
        temp = temp / 10;
    }

    if(num == armstrong)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
