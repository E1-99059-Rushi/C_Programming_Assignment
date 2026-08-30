#include<stdio.h>

int main()
{ 
	int month,year,days;
	
	printf("Enter month 1-12:");
	scanf("%d",&month);

	printf("Enter year:");
	scanf("%d",&year);

	switch(month)
		{

			case 1 : days=31;
				break;

			case 2: if(year%400==0	|| year%100!=0 && year%4==0)
					{
					days=29;
					break;
					}
				else{
					days=28;
					break;
			            }
			case 3: days=31;
				break;

			case 4: days=30;
				break;
			
			case 5: days=31;
				break;

			case 6: days=30;
				break;

			case 7: days=31;
				break;

			case 8: days=31;
				break;

			case 9: days=30;
				break;
	
			case 10:days=31;
				break;

			case 11:days=30;
				break;

			case 12:days=31;
				break;

			default :printf("Enter valid month between 1-12.\n");
		}

	printf("%d number of days in %d/%d\n ",days,month,year);
	return 0;
}
