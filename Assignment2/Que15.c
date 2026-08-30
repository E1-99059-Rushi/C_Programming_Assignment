#include <stdio.h>

int main()
{
    int day, month, year;
    int y, c, h;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if(month == 1 || month == 2)
    {
        month = month + 12;
        year = year - 1;
    }

    y = year % 100;
    c = year / 100;

    h = (day + (13 * (month + 1)) / 5 + y + y / 4 + c / 4 + 5 * c) % 7;

    switch(h)
    {
        case 0:
            printf("Saturday\n");
            break;

        case 1:
            printf("Sunday\n");
            break;

        case 2:
            printf("Monday\n");
            break;

        case 3:
            printf("Tuesday\n");
            break;

        case 4:
            printf("Wednesday\n");
            break;

        case 5:
            printf("Thursday\n");
            break;

        case 6:
            printf("Friday\n");
            break;
    }

    return 0;
}
