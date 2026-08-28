#include <stdio.h>

int main()
{
    int month, year, days;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

   //  a) Using if-else ladder
   /*
    if (month == 1)
        days = 31;
    else if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 3)
        days = 31;
    else if (month == 4)
        days = 30;
    else if (month == 5)
        days = 31;
    else if (month == 6)
        days = 30;
    else if (month == 7)
        days = 31;
    else if (month == 8)
        days = 31;
    else if (month == 9)
        days = 30;
    else if (month == 10)
        days = 31;
    else if (month == 11)
        days = 30;
    else if (month == 12)
        days = 31;
    else
        days = 0;

    if (days == 0)
        printf("Invalid month.\n");
    else
        printf("Number of days = %d.\n", days);
   */



	 //b)B using logical operator
    	
	if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else if (month >= 1 && month <= 12)
    {
        days = 31;
    }
    else
    {
        days = 0;
    }

    if (days == 0)
        printf("Invalid month.\n");
    else
        printf("Number of days = %d\n", days);

    return 0;

}
