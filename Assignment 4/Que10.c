#include<stdio.h>
void leap_year(int year);
void days(int year,int month);

void leap_year(int year)
{
	if( year %400 == 0 || (year % 4 == 0 && year % 100 !=0) )
		{
			printf("%d is a leap year. \n",year);
		}
	else
		{
			printf("%d is a not leap year. \n",year);
		}

}

void days(int year,int month)
{
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			printf("number of days in %d month is : %d \n",month ,31);
		}
	 if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			printf("number of days in %d  month is : %d \n",month ,30);
		}
	else if (month == 2)
		{
			if( year %400 == 0 || (year % 4 == 0 && year % 100 !=0) )
				{
					printf("number of days in a leap year. %d \n",29);
				}
			else
				{
					printf("number of days in non-leap year. %d \n",28);
				}
		}
	else
		printf("Enter valid month...! \n");
}

int main()
{
	int year,month;
	printf("Enter the year to find leap or not : ");
	scanf("%d",&year);

	printf("Enter month between 1-12 : ");
	scanf("%d",&month);
 	
	leap_year(year);
	days(year,month);


return 0;
}
