#include<stdio.h>
void fact(int num);

void fact(int num)
{
	int fact = 1;
	int i;
	for(i = 1; i <= num; i++)
		{
			fact = fact * i;
		
		}
	printf("factorial of %d is : %d \n",i-1,fact);
}



int main()
{
	int num;
	printf("Enter number to find factorial:");
	scanf("%d",&num);
	
	fact(num);


return 0;
}
