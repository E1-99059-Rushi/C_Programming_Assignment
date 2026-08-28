#include <stdio.h>

int main()
{
    int year, days;

    printf("Enter year: ");
    scanf("%d", &year);

    // a) Without logical operators 
    if (year % 400 == 0)
    {
        days = 366;
    }
    else
    {
        if (year % 100 == 0)
            days = 365;
        else
        {
            if (year % 4 == 0)
                days = 366;
            else
                days = 365;
        }
    }

    printf(" Without logical operators: %d days.\n", days);
  
    // b) Using logical operators 
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        days = 366;
    else
        days = 365;

    printf("Using logical operators: %d days.\n", days);

    
	//c) Using ternary operator 
    days = ((year % 400 == 0) ||
            ((year % 4 == 0) && (year % 100 != 0))) ? 366 : 365;

    printf(" Using ternary operator: %d days.\n", days);

    return 0;
}
